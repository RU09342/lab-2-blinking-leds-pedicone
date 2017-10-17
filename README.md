# Lab 2 - Button Blink
#### Jack Pedicone
##### 10-9-2017

## Library Used
msp430.h - default library

## Dependencies
* MSP430 Development board
* Code Composer Studio
* A button and 2 LEDs

## Set Requirements
"Now that you have looked at blinking the LED from some built in delay, but what if we wanted to control the state of the LED by a button? You may think "Why would I need a Microcontroller to perform the job of a switch?". And that is where you come in. The bare minimum for this part of the lab is to essentially replicate a switch with your development board."

#### Tasks
* [x] Control the state of the LED by a button similar to a switch
* [x] Extra Work

## Compatibility
* [x] MSP430F5529
* [x] MSP430FR2311
* [x] MSP430FR6989
* [x] MSP430FR5594
* [x] MSP430G2553

# Functionality
Change the state of an LED with a button on the board
### Detailed Description

* stop watchdog
* Use definitions to set output pins and button control
* Set pull-up resistor
* Set while and if conditions to set on and off statements

# Extra Work

#### Color Change
"What if upon a button press, the LED which was blinking changed. Some of the development boards contain two LEDs, so you could swap between a Red and a Green LED."

* initialize two LEDs (light and light2)
* define pins for both LEDs
* during the if statement, turn one LED off, and blink the other LED every time it counts to 50000
* in the else statement, repeat above but switch the lights
