#include <mbed.h>
#include <rtos.h>

using namespace rtos;

Thread blinker;

void blink() {
  while (true) {
    digitalWrite(LED_BUILTIN, HIGH);
    thread_sleep_for(1000);
    digitalWrite(LED_BUILTIN, LOW);
    thread_sleep_for(1000);
  }
}

void setup() {  
  pinMode(LED_BUILTIN, OUTPUT);
  blinker.start(mbed::callback(blink));
}

void loop() {}