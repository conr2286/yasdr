/**

  @file Device-Dependent Declarations for the ATMega328 implementation of the GPIO Abstractor

  Implementation:  These declarations are #included by the device-independent GPIOAbstractor.h file

**/

#define NPORTS (3)  //Number of GPIO ports in the ATMega328 MCU


//Arrange for the C ISRs to become friends of the GPIOAbstractor class so they may access
//its private class members.  Dependency:  Exploits knowledge of how the ISR() macro
//defines the C functions.  Note:  The actual interrupt handlers are not and cannot be
//class members without an unwanted, more intrusive, exploit of the ISR() macro.
extern "C" void PCINT0_vect(void) __attribute__((signal));  //See implementation of the ISR() macro
extern "C" void PCINT1_vect(void) __attribute__((signal));  //See implementation of the ISR() macro
extern "C" void PCINT2_vect(void) __attribute__((signal));  //See implementation of the ISR() macro


//Define a datatype to map (GPIO) digital pins to port and bit numbers.  Each instance of a PinMap
//type contains two fields, a port number and the number of a bit in that port.
struct PinMap {
  uint8_t port : 3;  //Three bits can address 8 ports
  uint8_t bit : 5;   //Five bits can address 32 bits in a port
};


//Include declarations for new implementations here

class GPIOAbstractor {

  //This private section contains device-dependent declarations for this specific MCU
private:
  static void (*interruptHandlers[][8])();                //User-supplied ISRs for pins of interest to them
  static uint8_t savedPinStates[NPORTS];  //Saved pin values (for abstracting CHANGE mode)
  static uint8_t pinModes[NPORTS][8];     //Saved pin modes supplied by user
  const static PinMap pinMap[];                           //Maps Arduino digital pin number to <port,bit>
  friend void PCINT0_vect(void);                          //Grant interrupt handlers access to our private class members
  friend void PCINT1_vect(void);
  friend void PCINT2_vect(void);

  //This public section contains device-independent declarations comprising the interface to the GPIOAbstractor.
  //In the best of all possible worlds, these would reside in GPIOAbstractor.h but I've never found a clean way
  //to do that with C++.
public:
  GPIOAbstractor();
  static void pinMode(uint8_t pin, uint8_t mode);
  static bool digitalRead(uint8_t pin);
  static void digitalWrite(uint8_t pin, bool value);
  static void attachInterrupt(uint8_t digitalPin, void (*isr)(), uint8_t mode);
  static void detachInterrupt(uint8_t digitalPin);
};
