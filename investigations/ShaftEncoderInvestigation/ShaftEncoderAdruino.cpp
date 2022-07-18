/**
   @file Interrupt-driven Shaft Encoder implementation over the Arduino APIs
   
   @author  Jim Conrad, KQ7B

   Dependencies: This code was originally developed for the Yumo E6A2-CW3C (Sparkfun Part# COM-10932) 
   200 pulse/revolution quadrature shaft encoder, but likely will or can be adapted to work
   with many quadrature encoders.  Expecting moderately slow rotation speeds, this code eschews
   direct access to GPIO pins to favor the modest level of MCU independence provided by the 
   Arduino APIs.
   
   Operation:  Quadrature shaft encoders output two signals, here referred to as encoderA and
   encoderB.  The E6A2-CW3C signals are NPN open collector, and we arrange for the MCU to supply
   the necessary pullup resistors on the two GPIO pins.  Both signals generate an interrupt on
   both their rising and falling edges; the interrupt service routine decodes the direction
   of rotation using a state machine and increments/decrements the encoder's position.
   

*/

#include <Arduino.h>
#include "ShaftEncoder.h"


//Many variables that seemingly should be member variables are static because the ISR must be static
//and thus has no reference to locate this particular instance of a ShaftEncoder
static long encoderPosition;  //Compiler must expect position to change as code executes
static uint8_t currentState;  //Finite State Machine's current state
static unsigned nInvalids;
static uint8_t pinA;  //Encoder's quadrature signal, A, is on pinA
static uint8_t pinB;  //Encoder's quadrature signal, B, is on pinB

//Define the three possible actions performed by the finite state machine decoding the quadrature signals
#define T_CW 0  //Clockwise rotation
#define T_CC 1  //Counter-clockwise rotation
#define T_IV 2  //Invalid

//Define the Finite State Transition Matrix for decoding the quadrature output from the encoder.  The table
//has four rows, one for each of the machine's four possible current states, 00, 01, 10 and 11.  Each row
//has four columns, one for each event, 00, 01, 10, and 11. The event is a two-bit tuple formed from
//the encoder's quadature outputs read from digital pins, pinA and pinB.  The content of each table cell
//specifies the action to take in response to events in the current state.  There are only three possible
//actions:  clockwise (T_CW), counter-clockwise (T_CC), and invalid (T_IV).  Invalid actions are not
//possible with a properly functioning quadrature decoder, but they may arise from hardware failures
//or if/when we miss an interrupt so we accommodate them as smoothly as possible.
static uint8_t stm[4][4] = {
  { T_IV, T_CC, T_CW, T_IV },  //Actions in currentState==00 for events 00, 01, 10 and 11
  { T_CW, T_IV, T_IV, T_CC },  //Actions in currentState==01 for events 00, 01, 10 and 11
  { T_CC, T_IV, T_IV, T_CW },  //Actions in currentState==10 for events 00, 01, 10 and 11
  { T_IV, T_CW, T_CC, T_IV }   //Actions in currentState==11 for events 00, 01, 10 and 11
};

/**
 * The shaft encoder's interrupt service routine (ISR).  The ISR is invoked by both the rising and
 * falling edges of both quadrature signals (pinA and pinB).
 */

static void encoderISR() {

  //Read value of both encoder signals.  To avoid potential invalid event values, consider changing
  //this code to read directly from a PORT to get the value of both pins in a single, atomic operation.
  uint8_t rotA = digitalRead(pinA);      //Will be 0 or 1
  uint8_t rotB = digitalRead(pinB);      //Also 0 or 1... BUT... pinA *might* have changed :(
  uint8_t event = (rotA << 1) | (rotB);  //Event value will be 00, 01, 10 or 11

  //The event drives the state machine's actions coded in the state transition matrix, stm[][]
  switch (stm[currentState][event]) {
    case T_CW: encoderPosition++; break;  //Clockwise rotation
    case T_CC: encoderPosition--; break;  //Counter-clockwise rotation
    case T_IV:
    default: nInvalids++; break;  //Position doesn't change for an invalid transition
  }

  //Whether valid or not, this event becomes the state machine's new current state
  currentState = event;  //"No matter where you go, there you are." -- Buckaroo Bonzai
}


/**
   Constructor  
*/
ShaftEncoder::ShaftEncoder(uint8_t pin_A, uint8_t pin_B) {

  //Initialize ShaftEncoder's state
  nInvalids = 0;         //No noise yet
  pinA = pin_A;          //Arduino Digital Pin numbers...
  pinB = pin_B;          //...for the quadrature signals.
  encoderPosition = 0L;  //Encoder will count up/down from 0

  //Configure the encoder digital input pins
  pinMode(pinA, INPUT_PULLUP);  //Arrange for Arduino to supply an open collector pullup resistor
  pinMode(pinB, INPUT_PULLUP);  //on both GPIO pins

  //The encoder's current outputs form the state machine's initial state
  uint8_t rotA = digitalRead(pinA);     //Will be 0 or 1
  uint8_t rotB = digitalRead(pinB);     //Also 0 or 1
  currentState = (rotA << 1) | (rotB);  //Event value will be 00, 01, 10 or 11

  //Configure interrupt system to detect when the encoder's shaft rotates by noting the rising/falling edges
  //of the encoder's ouput signals
  attachInterrupt(digitalPinToInterrupt(pinA), encoderISR, CHANGE);  //Note that a single ISR services both pins
  attachInterrupt(digitalPinToInterrupt(pinB), encoderISR, CHANGE);
}


//Retrieve encoder position
long ShaftEncoder::getPosition() {
  return encoderPosition;
}

//Modify encoder position
void ShaftEncoder::setPosition(long p) {
  encoderPosition = p;
}

//Retrieve count of invalid transitions
unsigned ShaftEncoder::getNInvalids() {
  return nInvalids;
}