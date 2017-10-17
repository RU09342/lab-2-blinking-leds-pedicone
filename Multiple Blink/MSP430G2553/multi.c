/*
Multi Blink - G2553
Author: Jack Pedicone
 */

#include <msp430.h>

#define light BIT0;
#define light2 BIT6;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= light;                  // configure LED as output
    P1DIR |= light2;                  // configure switch as input

    volatile unsigned int i;        // volatile to prevent optimization

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
}
