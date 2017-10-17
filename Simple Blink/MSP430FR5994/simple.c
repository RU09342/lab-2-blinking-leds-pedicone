/*
Simple Blink - FR5994
Author: Jack Pedicone
 */

#include <msp430.h>

#define light BIT0;

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;     // Stop watchdog timer
  PM5CTL0 &= ~LOCKLPM5;       // required for testing the FR boards
  P1DIR |= BIT0;                // Set LED to output

  volatile unsigned int i;

  while(1) 						// loop forever
  {
    P1OUT ^= BIT0;              // toggles LED on/off
    for(i=5000; i>0; i--);      // counts down from 5000 until it reaches 0
  }
}
