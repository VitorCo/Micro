 #include <msp430g2553.h>
    void main(void)
    {
        WDTCTL = WDTPW|WDTHOLD;
        P1OUT = 0;
        P1DIR = BIT6 + BIT0;

        for(;;){
        PiscaLed();
        }
    }
    void PiscaLed(void){
             P1OUT ^= 0x41;
            __delay_cycles(1600000);
    }
