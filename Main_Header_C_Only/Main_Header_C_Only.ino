//------------------- Includes -------------------------//
#include <Arduino.h>

extern "C"{   // Alternative to naming all ".c" files to ".cpp"
  #include "motor.h"
  #include "ledFlash.h"
}



//-------------- Setup -------------------------------//
void setup(){
    MotorSetup(PIN_MOTOR);
    LEDSetup(PIN_LED);
    delay(1000);
}

//------------ Main -------------------------------//
void loop(){

  MotorSpeed(500);
  
  LEDSpeed(100, 6);   // Speed of 100 miliseconds at 6 cycles
  LEDSpeed(1000, 2);
  LEDSpeed(50, 20);

  while(1){ ; }   // END of program
} 
