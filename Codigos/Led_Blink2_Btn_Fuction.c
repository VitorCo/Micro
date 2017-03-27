#include <msp430g2553.h>
        #define BTN BIT3
        #define LED1 BIT0
        #define LED2 BIT6
    void main(void)
    {
        WDTCTL = WDTPW|WDTHOLD;
        P1OUT = 0;
        P1DIR = LED1 + LED2;
        P1REN = BTN; //habilita resistor interno
        P1OUT = BTN; //resistor interno de pull-up
        for(;;)
        {
            while((P1IN & BTN) == 0)
            {
                PiscaLed();
            }
            while((P1IN & BTN) != 0){
                P1OUT &= ~(LED1 + LED2);
            }
        }
    }
   void PiscaLed(void){
                P1OUT |= LED1 + LED2;
                __delay_cycles(500000);
                P1OUT ^= 0x41;
                __delay_cycles(500000);
                P1OUT ^= 0x41;
                __delay_cycles(500000);
                P1OUT ^= 0x41;
}
