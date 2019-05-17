/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 15:10:37
 * Author : Mahima
 */ 
#ifndef F_CPU
#define F_CPU 1600000UL
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
    /* Replace with your application code */
	DDRB=0XFF;
    while (1) 
    {
		PORTB=0XFF;
		_delay_ms(100);
		PORTB=0X00;
		_delay_ms(100);
    }
}

