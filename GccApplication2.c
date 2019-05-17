/*
 * GccApplication2.c
 *
 * Created: 10-05-2019 09:39:51
 * Author : Mahima
 */ 
#ifndef F_CPU
#define F_CPU 1600000UL
#endif
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{  
	DDRC=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTC=1<<DDC0;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC1;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC2;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC3;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC4;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC5;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC6;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
		PORTC=1<<DDC7;
		_delay_ms(100);
		DDRC=0X00;
		_delay_ms(100);
	}
		
    
}

