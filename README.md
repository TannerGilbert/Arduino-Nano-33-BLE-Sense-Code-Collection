# Arduino Nano 33 BLE Sense

![Arduino Nano 33 BLE Sense](https://content.arduino.cc/assets/NANO-33-BLE-Sense_sensor-indentification.png)

The Arduino Nano 33 BLE Sense is an evolution of the traditional Arduino Nano, but featuring a lot more powerful processor, the nRF52840 from Nordic Semiconductors, a 32-bit ARM® Cortex™-M4 CPU running at 64 MHz. This will allow you to make larger programs than with the Arduino Uno (it has 1MB of program memory, 32 times bigger), and with a lot more variables (the RAM is 128 times bigger). The main processor includes other amazing features like Bluetooth® pairing via NFC and ultra low power consumption modes. - [ARDUINO NANO 33 BLE SENSE Official Website](https://store.arduino.cc/arduino-nano-33-ble-sense)

## Hardware Overview

<table>
    <tr>
        <td>Microcontroller</td>
        <td>nRF52840 (<a href="https://content.arduino.cc/assets/Nano_BLE_MCU-nRF52840_PS_v1.1.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Operating Voltage</td>
        <td>3.3V</td>
    </tr>
    <tr>
        <td>Input Voltage (limit)</td>
        <td>21V</td>
    </tr>
    <tr>
        <td>DC Current per I/O Pin</td>
        <td>15mA</td>
    </tr>
    <tr>
        <td>Clock Speed</td>
        <td>64MHz</td>
    </tr>
    <tr>
        <td>CPU Flash Memory</td>
        <td>1MB (nRF52840)</td>
    </tr>
    <tr>
        <td>SRAM</td>
        <td>256KB (nRF52840)</td>
    </tr>
    <tr>
        <td>EEPROM</td>
        <td>none</td>
    </tr>
    <tr>
        <td>Digital Input / Output Pins</td>
        <td>14</td>
    </tr>
    <tr>
        <td>PWM Pins</td>
        <td>all digital pins</td>
    </tr>
    <tr>
        <td>UART</td>
        <td>1</td>
    </tr>
    <tr>
        <td>SPI</td>
        <td>1</td>
    </tr>
    <tr>
        <td>I2C</td>
        <td>1</td>
    </tr>
    <tr>
        <td>Analog Input Pins</td>
        <td>8 (ADC 12 bit 200 ksamples)</td>
    </tr>
    <tr>
        <td>Analog Output Pins</td>
        <td>Only through PWM (no DAC)</td>
    </tr>
    <tr>
        <td>External Interrupts</td>
        <td>all digital pins</td>
    </tr>
    <tr>
        <td>LED_BUILTIN</td>
        <td>13</td>
    </tr>
    <tr>
        <td>USB</td>
        <td>Native in the nRF52840 Processor</td>
    </tr>
    <tr>
        <td>IMU</td>
        <td>LSM9DS1 (<a href="https://content.arduino.cc/assets/Nano_BLE_Sense_lsm9ds1.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Microphone</td>
        <td>MP34DT05 (<a href="https://content.arduino.cc/assets/Nano_BLE_Sense_mp34dt05-a.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Gesture, light, proximity</td>
        <td>APDS9960 (<a href="https://content.arduino.cc/assets/Nano_BLE_Sense_av02-4191en_ds_apds-9960.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Barometric pressure</td>
        <td>LPS22HB (<a href="https://content.arduino.cc/assets/Nano_BLE_Sense_lps22hb.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Temperature, humidity</td>
        <td>HTS221 (<a href="https://content.arduino.cc/assets/Nano_BLE_Sense_HTS221.pdf">datasheet</a>)</td>
    </tr>
    <tr>
        <td>Length</td>
        <td>45 mm</td>
    </tr>
    <tr>
        <td>Width</td>
        <td>18 mm</td>
    </tr>
    <tr>
        <td>Weight</td>
        <td>5 gr (with headers)</td>
    </tr>
</table>

## Software Improvements

Just like all Arduino boards, the Arduino Nano 33 BLE Sense can be programmed with the Arduino IDE. But the nRF52840, which is used inside the Arduino Nano 33 BLE Sense can also be programmed using [ARM Mbed OS](https://os.mbed.com/), a real time operating system for low power devices. With Mbed OS you can run multiple threads at the same time. It also has features to reduce the power consumption by entering **tickles mode** duing delay statements.

For more information check out the [official Mbed site](https://os.mbed.com/).

## Resources

* [Arduino Nano 33 BLE Sense Website](https://store.arduino.cc/arduino-nano-33-ble-sense)
* [Getting started with the Arduino NANO 33 BLE Sense](https://www.arduino.cc/en/Guide/NANO33BLESense)
* [nRF52840 Datasheet](https://content.arduino.cc/assets/Nano_BLE_MCU-nRF52840_PS_v1.1.pdf)