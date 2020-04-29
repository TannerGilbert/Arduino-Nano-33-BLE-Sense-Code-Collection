# LPS22HB - MEMS nano pressure sensor: 260-1260 hPa absolute digital output barometer 

The LPS22HB is an ultra-compact piezoresistive absolute pressure sensor which functions as a digital output barometer. The device comprises a sensing element and an IC interface which communicates through I2C or SPI from the sensing element to the application. 

The sensing element, which detects absolute pressure, consists of a suspended membrane manufactured using a dedicated process developed by ST.

The LPS22HB is available in a full-mold, holed LGA package (HLGA). It is guaranteed to operate over a temperature range extending from -40 °C to +85 °C. The package is holed to allow external pressure to reach the sensing element. 

Resources:
* [Website](https://www.st.com/en/mems-and-sensors/lps22hb.html)
* [Datasheet](https://www.st.com/resource/en/datasheet/lps22hb.pdf)

Key features:
* 260 to 1260 hPa absolute pressure range
* Current consumption down to 3 μA
* High overpressure capability: 20x full-scale
* Embedded temperature compensation
* 24-bit pressure data output
* 16-bit temperature data output
* ODR from 1 Hz to 75 Hz
* SPI and I²C interfaces
* Embedded FIFO
* Interrupt functions: Data Ready, FIFO flags, pressure thresholds
* Supply voltage: 1.7 to 3.6 V
* High shock survivability: 22,000 g
* Small and thin package
* ECOPACK® lead-free compliant

## Code Example

The LPS22HB sensor on the Arduino Nano 33 BLE Sense can be accessed through the [ArduinoLPS22HB library](https://www.arduino.cc/en/Reference/ArduinoLPS22HB).

ReadPressure Example:
```c
#include <Arduino_LPS22HB.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!BARO.begin()) {
    Serial.println("Failed to initialize pressure sensor!");
    while (1);
  }
}

void loop() {
  // read the sensor value
  float pressure = BARO.readPressure();

  // print the sensor value
  Serial.print("Pressure = ");
  Serial.print(pressure);
  Serial.println(" kPa");

  // print an empty line
  Serial.println();

  // wait 1 second to print again
  delay(1000);
}
```

Output:
```
Pressure = 90.25 kPa

Pressure = 90.25 kPa

Pressure = 90.25 kPa

Pressure = 90.25 kPa

...
```