/**
  @file Investigate the GPIO architectures

  Usage:  The program configures TEST_PIN for digital input with a pullup resistor, and
  then loops endlessly, displaying the current count of interrupts arising from rising-edges
  on that pin.

  @author KQ7B --- Jim Conrad
**/


#include "GPIOAbstractor.h"

#define TEST_PIN 5

extern unsigned nPortB, nPortC, nPortD;


typedef unsigned long u32;

GPIOAbstractor gpio;

u32 count;
u32 stopTime;  //milliseconds

void myISR() {
  count++;
}

void setup() {
  count = 0;
  stopTime = millis() + 1000L;
  Serial.begin(57600);
  Serial.println("\nStarting...");
  pinMode(TEST_PIN,INPUT_PULLUP);
  gpio.attachInterrupt(TEST_PIN, myISR, RISING);
}

void loop() {
  if (millis() >= stopTime) {
    Serial.print("count="); Serial.print(count);          //Display count
    Serial.print(", nPortB="); Serial.print(nPortB);      //Interrupt counts on ports
    Serial.print(", nPortC="); Serial.print(nPortC);      //Interrupt counts on ports
    Serial.print(", nPortD="); Serial.println(nPortD);      //Interrupt counts on ports
    //count = 0;                    //Reset count to see frequency
    stopTime = millis() + 1000L;
  }
}
