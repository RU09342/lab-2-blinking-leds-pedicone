# Lab 2 - Off Board Blink
#### Jack Pedicone
##### 10-14-2017

## Library Used
msp430.h - default library

## Dependencies
* MSP430 Development boards
* Code Composer Studios 

## File name
* offboard.c

## Set Requirements
"Now that we have the whole blinking LED out of the way, why don't we try making things a little more convenient by taking the G2553 off the development board and into a breadboard. In addition to the software, your README needs to also contain a picture of your circuit with at least 2 LEDs blinking all on a breadboard an without a development board."

#### Tasks
* [x] Perform the buttonblink.c code on a breadboard
* [x] Have a picture of 2 LEDs blinking without a development board

## Compatibility
* [x] MSP430G2553

### Detailed Description

* The code tested on the offboard G2553 includes the simple blink and the multi blink.
* The picture included in the folder is from the multi blink code. A video is also available if necessary.
* After connecting the G2553 to ground and Vcc, the reset pin of the G2553 is connected to ground on the breadboard.
* Pins 1.0 and 1.6 on the G2553 are connected directly to LEDs each, in series with 1k ohm resistors that lead to ground.
