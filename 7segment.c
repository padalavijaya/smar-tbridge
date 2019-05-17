#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <stdlib.h>
int main(void)
{
   DDRA=0XFF;
    while (1) 
    {
		PORTA=0XFC;
		_delay_ms(500);
		PORTA=0X60;
		_delay_ms(500);
		PORTA=0XDA;
       _delay_ms(500);
        PORTA=0XF2;
		_delay_ms(500);
        PORTA=0X66;
		_delay_ms(500);
		PORTA=0XB6;
        _delay_ms(500);
		PORTA=0XBE;
	   _delay_ms(500);
		PORTA=0XE0;
		_delay_ms(500);
		PORTA=0XFE;
		_delay_ms(500);
		PORTA=0XF2;
		_delay_ms(500);
		PORTA=0XEE;
		_delay_ms(500);
		PORTA=0X3E;
		_delay_ms(500);
		PORTA=0X9C;
		_delay_ms(500);
		PORTA=0X7A;
		_delay_ms(500);
		PORTA=0X9E;
		_delay_ms(500);
		PORTA=0X8F;
		_delay_ms(500);
	}
		
}
		
		
		
		
		
		

		
		

		
		
    

