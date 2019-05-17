#ifdef F_CPU
#define F_CPU
#endif
#include <avr/io.h>
#define F_CPU 1000000
#include <util/delay.h>
#include <stdlib.h>
int main()
{
	DDRB=0XFF;
    while (1) 
    {
		PORTB=0X01;
		_delay_ms(6000);
		PORTB=0x00;
		_delay_ms(7000);
		PORTB=0X02;
		_delay_ms(6000);
		PORTB=0X00;
		_delay_ms(7000);
    }
}

