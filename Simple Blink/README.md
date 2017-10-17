# Lab 2 - Simple Blink
#### Jack Pedicone
##### 10-14-2017

## Library Used
msp430.h - default library

## Dependencies
* MSP430 Development boards
* Code Composer Studio
* 1 LED

## File name
* simple.c

## Set Requirements
"For starters, you will need to blink one of the on-board LED's at a particular rate. It is up to you to determine what rate you want to blink it at, however it has to be symmetrical (50% Duty Cycle), meaning equal times on and off. You should attempt multiple different speeds before moving on to the next part of the lab."

#### Tasks
* [x] Blink an LED by initializing the output pins and toggling the LED using a count

## Compatibility
* [x] MSP430F5529
* [x] MSP430FR2311
* [x] MSP430FR6989
* [x] MSP430FR5594
* [x] MSP430G2553

# Functionality
* Blink an LED by initializing the output pins and toggling the LED using a count
### Detailed Description

* Stop the watchdog timer
* For FR boards, disable the GPIO power-on default high-impedance mode 
* Initialize output pins for the LED, in this case it was only P1DIR
* Set while loop to allow the program to run indefinitely
* Blink the first LED using an XOR statement to toggle the light on and off 
* A for statement that counts from 5000 to 0 is used to make the LED blink constantly during the while loop
* The speed of the LED blinking can be altered by changing the 5000 to another number accordingly


#### Example code

```C
  while(1) 						// loop forever
  {
    P1OUT ^= BIT0;              // toggles LED on/off
    for(i=5000; i>0; i--);      // counts down from 5000 until it reaches 0
  }
```

