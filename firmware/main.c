#ifndef F_CPU
#define F_CPU 1000000UL // or whatever may be your frequency
#endif
 
#include <avr/io.h>
#include <util/delay.h>                // for _delay_ms()

/*
RGB top 
PA4
PA3
PA0

RGB bottom
PA6
PA5
PA7

*/

int main(void)
{
    DDRA = 0xFF;

    while(1)
    {
        PORTA = ~(1 << 4);
        _delay_ms(500);
        PORTA = ~(1 << 3);
        _delay_ms(500);
        PORTA = ~(1 << 0);
        _delay_ms(500);

        PORTA = ~(1 << 6);
        _delay_ms(500);
        PORTA = ~(1 << 5);
        _delay_ms(500);
        PORTA = ~(1 << 7);
        _delay_ms(500);

    }
}

