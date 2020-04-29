# HTS221 - Capacitive digital sensor for relative humidity and temperature

![HTS221](https://miro.medium.com/max/364/1*6r6y-JOqkPVBq6V4gk65Ww.jpeg)

The HTS221 is an ultra-compact sensor for relative humidity and temperature. It includes a sensing element and a mixed signal ASIC to provide the measurement information through digital serial interfaces. 

The sensing element consists of a polymer dielectric planar capacitor structure capable of detecting relative humidity variations and is manufactured using a dedicated ST process. The HTS221 is available in a small top-holed cap land grid array (HLGA) package guaranteed to operate over a temperature range from -40 °C to +120 °C.

Resources:
* [Website](https://www.st.com/en/mems-and-sensors/hts221.html)
* [Datasheet](https://www.st.com/resource/en/datasheet/HTS221.pdf)

Key features:
* 0 to 100% relative humidity range
* Supply voltage: 1.7 to 3.6 V
* Low power consumption: 2 μA @ 1 Hz ODR
* Selectable ODR from 1 Hz to 12.5 Hz
* High rH sensitivity: 0.004% rH/LSB
* Humidity accuracy: ± 3.5% rH, 20 to +80% rH
* Temperature accuracy: ± 0.5 °C,15 to +40 °C
* Embedded 16-bit ADC
* 16-bit humidity and temperature output data
* SPI and I²C interfaces
* Factory calibrated
* Tiny 2 x 2 x 0.9 mm package
* ECOPACK® compliant

## Code Example

The HTS221 sensor on the Arduino Nano 33 BLE Sense can be accessed through the [ArduinoHTS221 library](https://www.arduino.cc/en/Reference/ArduinoHTS221).

ReadSensors Example:
```c
#include <Arduino_HTS221.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!HTS.begin()) {
    Serial.println("Failed to initialize humidity temperature sensor!");
    while (1);
  }
}

void loop() {
  // read all the sensor values
  float temperature = HTS.readTemperature();
  float humidity    = HTS.readHumidity();

  // print each of the sensor values
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity    = ");
  Serial.print(humidity);
  Serial.println(" %");

  // print an empty line
  Serial.println();

  // wait 1 second to print again
  delay(1000);
}
```

Output:
```
Temperature = 28.50 °C
Humidity    = 36.24 %

Temperature = 28.57 °C
Humidity    = 35.93 %

Temperature = 28.59 °C
Humidity    = 35.94 %

Temperature = 28.59 °C
Humidity    = 35.91 %

...
```