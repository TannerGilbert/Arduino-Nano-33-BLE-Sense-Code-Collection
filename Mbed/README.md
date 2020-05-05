# Mbed

> Mbed OS is an open-source operating system for platforms using Arm microcontrollers designed specifically for Internet of Things (IoT) devices: low-powered, constrained devices that need to connect to the internet. Mbed OS provides an abstraction layer for the microcontrollers it runs on, so that developers can focus on writing C/C++ applications that call functionality available on a range of hardware. Mbed OS applications can be reused on any Mbed-compatible platform. - [Mbed OS documentation](https://os.mbed.com/docs/mbed-os/v5.13/introduction/index.html)

For more information check out:
* [An introduction to Arm Mbed OS 5](https://os.mbed.com/docs/mbed-os/v5.13/introduction/index.html)
* [API documentation](https://os.mbed.com/docs/mbed-os/v5.13/apis/index.html)

## Code Examples

Mbed can be used inside the Arduino IDE by simple importing mbed.h

```c
#include "mbed.h"
```

Now we can use mbed to for example control a LED:

```c
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
```

As you can see we are mixing Arduino functions like ```digitalWrite``` and ```pinMode``` with ```wait_ms```, which is a mbed function.

With Mbed it's also really simple to implement Threads:

```c
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
```