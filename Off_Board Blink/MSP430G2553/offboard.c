/*
Off Board Blink - MSP430G2553
Author: Jack Pedicone
 */

#include <msp430.h>				

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD; //stop watchdog timer
    P1DIR |= BIT0;      // configure P1.0 as output
    P1DIR |= BIT6;		// configure P1.6 as output
    P1DIR &= ~BIT3;     // configure P1.3 as input
    P1REN |= BIT3;      // enable pull up/down resistor
    P1OUT |= BIT3;      // resistor set on pin 3 of port 1

    volatile unsigned int i;        // volatile to prevent optimization

    while(1) //run forever
      {
        int temp = P1IN & BIT3; //the switch is being held down
               if(temp != 8) 
               {
                   P1OUT ^= BIT6; 
                   for(i=50000; i>0; i--);
                   P1OUT &= ~BIT0;
				   //when held, red LED is turned off, and the green LED starts to blink instead
               }
               else
               {
                   P1OUT ^= BIT0;
                   for(i=50000; i>0; i--);
                   P1OUT &= ~BIT6;
				   //default state: the red LED is blinking while the green LED is off
               }
      }
}