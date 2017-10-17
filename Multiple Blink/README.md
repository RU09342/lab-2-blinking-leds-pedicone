# Lab 2 - Multi Blink
#### Jack Pedicone
##### 10-14-2017

## Library Used
msp430.h - default library

## Dependencies
* MSP430 Development boards
* Code Composer Studio
* 2 LEDs

## File name
* multi.c

## Set Requirements
"Now that we have blinked at least 1 LED, what about blinking multiple LEDS at the same time? The minimum that you need to develop is blinking at least two LEDs at two different rates. Although I am not going to give you a speed, you should probably pick a rate which is visible to a standard human. I really hope that you take this further and perform some of the extra work for this part of the lab exercise."

#### Tasks
* [x] Set the state of the LEDs to be blinking at different rates

## Compatibility
* [x] MSP430F5529
* [x] MSP430FR2311
* [x] MSP430FR6989
* [x] MSP430FR5594
* [x] MSP430G2553

# Functionality
* Set the state of the LEDs to be blinking at different rates
### Detailed Description

* Stop watchdog timer
* For FR boards, disable the GPIO power-on default high-impedance mode 
* Initialize output pins for the LEDs
* Set while condition to allow the program to run indefinitely
* Blink the first LED using an XOR statement to toggle the light
* A for statement that counts from 5000 to 0 is used to make the LED blink constantly during the while loop
* Derive the speed of the second statement using a modulo statement

#### Example code

```C
  while(1)
    {
        P1OUT ^= light;          // toggle LED on/off

        for(i=5000; i>0; i--) //counts down from 5000 until it reaches 0
            {

                if(i % 500 == 0)
                    {
                    P1OUT ^= light2;     // toggle the second LED on/off
                    }
            }
    }
```

