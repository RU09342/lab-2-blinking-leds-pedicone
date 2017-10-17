/*
Multi Blink - FR2311
Author: Jack Pedicone
 */

#include <msp430.h>

#define light BIT0;
#define light2 BIT0;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
	
    P1DIR |= light;                  // configure LED as output
    P2DIR |= light2;                  // configure switch as input

    volatile unsigned int i;        // volatile to prevent optimization

    while(1)
    {
        P1OUT ^= light;          // toggle LED on/off

        for(i=5000; i>0; i--) //counts down from 5000 until it reaches 0
            {

                if(i % 500 == 0)
                    {
                    P2OUT ^= light2;     // toggle the second LED on/off
                    }
            }
    }
}
