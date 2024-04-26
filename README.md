# AHT20 driver for Atmega328p

This repository contains a set of utility functions for using the AHT20 temperature and humidity sensor with an ATmega328P (or similar) microcontroller via the microcontroller's I2C interface. It also includes a set of functions for testing and displaying these values on a computer via UART.

Once the code is flashed onto a board using the avr-gcc compiler (see the makefile), the 'screen' program can be used on Ubuntu to display the values.

Exemple:

```
make
screen /dev/ttyUSB0 115200,cs8
```
(use ctrl-a + k to exit screen program)
