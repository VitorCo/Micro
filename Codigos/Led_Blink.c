    #include <msp430g2553.h>
    void main(void)
    {
        WDTCTL = WDTPW|WDTHOLD;
        P1OUT = 0;
        P1DIR = BIT6 + BIT0;

        for(;;){
        volatile unsigned int i;
        P1OUT ^= 0x41;
        i = 0;
        for (i = 0; i < 0x6000; i++);
        }
    }
