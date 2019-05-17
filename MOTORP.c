#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB|=(1<<PB3);
}


int main(void)
{
	PORTA=0X00;
	PORTB=(0<<PINB0);
	PORTC=0XFF;
	
	PWM_init();
	while (1)
	{
		if((PORTA & 1<<PINA0)==0)
		{
			OCR0=125;
			_delay_ms(8);
		}
		if((PORTD & 1<<PIND0)==0)
		{
			OCR0=100;
			_delay_ms(8);
			OCR0=200;
			_delay_ms(8);
		}
	}
}

