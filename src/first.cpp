#include <Arduino.h> 
#include "first.h"

First::First(int pin){
    pinMode(pin, OUTPUT);
    pinNumber = pin; 
}

void First::blink(bool value){
    if(value == true){
        digitalWrite(pinNumber, HIGH);
        delay(1000);
        digitalWrite(pinNumber, LOW);
        delay(1000);
    }
    else{
        digitalWrite(pinNumber, LOW);
        delay(1000);
    }
}

