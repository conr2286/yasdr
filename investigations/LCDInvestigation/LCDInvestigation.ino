/*
   @FILE Investigate performance of the parallel LCD library functions

   Connections:
     RS_PIN - The Arduino Digital pin connected to the LCD's RS signal
     ENABLE_PIN - The Arduino Digital pin connected to the LCD's ENABLE signal
     D4_PIN - The Arduino Digital pin connected to the LCD's D4 signal
     D5_PIN - The Arduino Digital pin connected to the LCD's D5 signal
     D6_PIN - The Arduino Digital pin connected to the LCD's D6 signal
     D7_PIN - The Arduino Digital pin connected to the LCD's D7 signal

   Usage:  No user interaction is required.  The program exercises the timing of various
   LCD functions and outputs their results to the serial (USB) port.

   Limitations:  Exercises only parallel (e.g. Hitachi HD44780 interface) text-based
   LCDs.  The code as implemented supports only the 4-wire data connection and
   assumes the LCD has at least 2 rows of at least 16 characters.

*/

#include <LiquidCrystal.h>

//Build the lcd object
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);


/*
   Time the performance of a single feature
*/
void timeIt( char *s, void (*theFunction)() ) {
  unsigned repetitions = 10000;
  unsigned long t0 = millis();        //Time when exercise begins
  for (unsigned i = 0; i < repetitions; i++) {
    theFunction();
  }
  unsigned long t1 = millis();        //Time when exercise ends
  Serial.print("\nTimeIt "); Serial.print(((float)(t1 - t0) / (float)repetitions));

}

/**
   exerciseSetCursor
*/
unsigned row = 0;
unsigned col = 0;
void exerciseSetCursor() {
  lcd.setCursor(col, row);
  row = (++row) % 2;
  col = (++col) % 16;
}

/**
   exercisePrint
*/
void exercisePrint() {
  lcd.print("p");
}

/**
   exerciseWrite()
*/
void exerciseWrite() {
  lcd.write('w');
}

/**
   Initialization
*/
void setup() {

  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.print("Starting...");

  //Display the starting message on the LCD to exercise the connection
  lcd.begin(16, 2);             //Two rows of sixteen characters each
  lcd.print("Starting!");       //Display the starting message

  //Time various LCD functions of interest
  timeIt((char *)"setCursor", exerciseSetCursor);
  timeIt((char *)"print", exercisePrint);
  timeIt((char *)"write", exerciseWrite);

}

void loop() {

}
