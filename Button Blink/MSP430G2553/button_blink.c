/*
Button Blink - G2553
Author: Jack Pedicone
 */
 
#include <msp430.h>

#define light BIT0;
#define light2 BIT6;
#define button BIT3;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
	
	P1OUT &= ~light;
	P1OUT &= ~light2;
    P1DIR |= light;                 // configure an led as output
    P1DIR |= light2;                // configure another led as output
    P1DIR &= ~button;                // configure a switch as input
    P1REN |= button;                 // add pull up resistor
    P1OUT |= button;

    volatile unsigned int i;        // volatile to prevent optimization

    while(1) //run forever
    {
        int temp = P1IN & button;     //the switch is being held down
        if(!(temp))
        {
            P1OUT ^= light;         //when held, this LED blinks
            for(i=50000;i > 0; i--);
            P1OUT &= ~light2;       //the LED not blinking is turned off
        }
        else                        //switch is not being held down
        {
            P1OUT ^= light2;        //the other LED starts blinking
            for(i=50000;i > 0; i--);
            P1OUT &= ~light;        //the first LED is turned off
        }
    }
}
