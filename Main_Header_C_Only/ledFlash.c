//------------------- New C File  -------------------------
#ifndef LEDFlash_c
#define LEDFlash_c

#include <Arduino.h>    // "#includes" MUST be instide of "#ifndef/endif"
#include "ledFlash.h"

#endif

void LEDSetup(int led_pin)
{
  pinMode(led_pin, OUTPUT);
}

void LEDSpeed(int led_speed, int led_cycles)
{
  int i;
  for(i=0; i<led_cycles; i++){
    digitalWrite(PIN_LED, HIGH);
    delay(led_speed);
    digitalWrite(PIN_LED, LOW);
    delay(led_speed);
  }
}


