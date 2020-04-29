# APDS-9960 - Digital Proximity, Ambient Light, RGB and Gesture Sensor

![](https://www.broadcom.com/media/1211123566614/apds-9960_website.jpg)

The Broadcom APDS-9960 is a digital RGB, ambient light, proximity and gesture sensor device in a single 8-pin package. The device has an I2C compatible interface providing red, green, blue, clear (RGBC), proximity and gesture sensing with IR LED. The RGB and ambient light sensing feature detects light intensity under various lighting conditions and through various attentuation materials including darkened glass. In addition, the integrated UV-IR blocking filter enables accurate ambient light and correlated color temperature sensing.

The proximity and gesture feature is factory-trimmed and calibrated to 100mm proximity detection distance without requiring customer calibrations. Gesture detection utilizes four directional photodiodes, integrated with visible blocking filter, to accurately sense simple UP-DOWN-RIGHT-LEFT gestures or more complex gestures. The addition of micro-optics lenses within the module provides high efficient transmission and reception of infrared energy. An internal state machine allows the device to be put into a low power state between RGBC, proximity and gesture measurements providing very low power consumption.

Resources:
* [Website](https://www.broadcom.com/products/optical-sensors/integrated-ambient-light-and-proximity-sensors/apds-9960)
* [Datasheet](https://docs.broadcom.com/doc/AV02-4191EN)

Key features:
* Miniature Package Size: L3.94 x W2.36 x H1.35 mm
* I2C Interface Compatible with Dedicated Interrupt Pin
* High Sensitivity Enabling Operation Behind Darkened Glass
* RGBC Light Sensing with Integrated UV-IR Block Filter
* Geometrically Arranged RGBC Photodiodes Providing Uniform Angular Response
* Calibrated to 100mm Detection Distance Eliminating Customer End Product Calibration
* Four Separate Photodiodes Sensitive to Different Directions
* Proximity and Gesture Sensing with Integrated Visible Block Filter
* Patented Shield Design Minimizing Proximity Cross Talk
* Integrated Optical Lens Collimating IR LED Beam and Improving Photodiode Sensitivity.
* Low Power Consumption: 1.0 µA typical in Sleep Mode

## Code Example

The APDS-9960 sensor on the Arduino Nano 33 BLE Sense can be accessed through the [ArduinoAPDS9960 library](https://www.arduino.cc/en/Reference/ArduinoAPDS9960).

FullExample.ino:

```c
#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  while (!Serial); // Wait for serial monitor to open

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor.");
    while (true); // Stop forever
  }
}

int proximity = 0;
int r = 0, g = 0, b = 0;
unsigned long lastUpdate = 0;

void loop() {

  // Check if a proximity reading is available.
  if (APDS.proximityAvailable()) {
    proximity = APDS.readProximity();
  }

  // check if a gesture reading is available
  if (APDS.gestureAvailable()) {
    int gesture = APDS.readGesture();
    switch (gesture) {
      case GESTURE_UP:
        Serial.println("Detected UP gesture");
        break;

      case GESTURE_DOWN:
        Serial.println("Detected DOWN gesture");
        break;

      case GESTURE_LEFT:
        Serial.println("Detected LEFT gesture");
        break;

      case GESTURE_RIGHT:
        Serial.println("Detected RIGHT gesture");
        break;

      default:
        // ignore
        break;
    }
  }

  // check if a color reading is available
  if (APDS.colorAvailable()) {
    APDS.readColor(r, g, b);
  }

  // Print updates every 100ms
  if (millis() - lastUpdate > 100) {
    lastUpdate = millis();
    Serial.print("PR=");
    Serial.print(proximity);
    Serial.print(" rgb=");
    Serial.print(r);
    Serial.print(",");
    Serial.print(g);
    Serial.print(",");
    Serial.println(b);
  }
}
```

Output:
```
PR=248 rgb=6,5,4
PR=250 rgb=6,5,5
PR=252 rgb=6,5,5
PR=253 rgb=6,5,4
PR=252 rgb=6,5,5
PR=250 rgb=6,5,5
PR=253 rgb=6,5,4
PR=251 rgb=6,5,4
...
```