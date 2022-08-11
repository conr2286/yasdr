/**
  @file Investigate the GPIO architectures

  @author KQ7B --- Jim Conrad
**/


#include "GPIOAbstractor.h"

#define TEST_PIN 5
#define TEST_INTERRUPT_MODE RISING


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
  pinMode(TEST_PIN,INPUT);
  gpio.attachInterrupt(TEST_PIN, myISR, TEST_INTERRUPT_MODE);
}

void loop() {
  if (millis() >= stopTime) {
    Serial.println(count);          //#interrupts/second
    count = 0;
    stopTime = millis() + 1000L;
  }
}
