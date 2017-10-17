/*
Button Blink - F5529
Author: Jack Pedicone
 */

#include <msp430.h>

#define light BIT0;
#define light2 BIT7;
#define button BIT1;

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer

    P1OUT &= ~light;
    P4OUT &= ~light2;
    P1DIR |= light;                 // configure an led as output
    P4DIR |= light2;                // configure another led as output
    P2DIR &= ~button;                // configure a switch as input
    P2REN |= button;                 // add pull up resistor
    P2OUT |= button;

    volatile unsigned int i;        // volatile to prevent optimization

    while(1) //run forever
    {
        int temp = P2IN & button;     //the switch is being held down
        if(!(temp)) //the switch is being held down
        {
            P1OUT ^= light;         //when held, this LED blinks
            for(i=50000;i > 0; i--);
            P4OUT &= ~light2;       //the LED not blinking is turned off
        }
        else                        //switch is not being held down
        {
            P4OUT ^= light2;        //the other LED starts blinking
            for(i=50000;i > 0; i--);
            P1OUT &= ~light;        //the first LED is turned off
        }
    }
}

