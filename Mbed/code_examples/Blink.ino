#include "mbed.h"

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  wait_ms(1000);               
  digitalWrite(LED_BUILTIN, LOW);    
  wait_ms(1000);                      
}