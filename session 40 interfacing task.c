
#define  PORTB    (*(volatile unsigned char *)0x38)
#define  DDRB    (*(volatile unsigned char *)0x37)
#define  PINB    (*(volatile unsigned char *)0x36)


#define  F_CPU   8000000
#include <util/delay.h>


int main(void)
{
	DDRB=0xff;
	
	
	while (1)
	{
		PORTB=0b00000001;
		_delay_ms(100);
		PORTB=0b00000010;
		_delay_ms(100);
		PORTB=0b00000100;
		_delay_ms(100);
		PORTB=0b00001000;
		_delay_ms(100);
		PORTB=0b00010000;
		_delay_ms(100);
		PORTB=0b00100000;
		_delay_ms(100);
		PORTB=0b01000000;
		_delay_ms(100);
		PORTB=0b10000000;
		_delay_ms(100);
	}
	
}

/********************************************/

#define  PORTB    (*(volatile unsigned char *)0x38)
#define  DDRB    (*(volatile unsigned char *)0x37)
#define  PINB    (*(volatile unsigned char *)0x36)


#define  F_CPU   8000000
#include <util/delay.h>


int main(void)
{
	DDRB=0xff;
	
	
	while (1)
	{
		PORTB=0b00000001;
		_delay_ms(100);
		PORTB=0b00000010;
		_delay_ms(100);
		PORTB=0b00000100;
		_delay_ms(100);
		PORTB=0b00001000;
		_delay_ms(100);
		PORTB=0b00010000;
		_delay_ms(100);
		PORTB=0b00100000;
		_delay_ms(100);
		PORTB=0b01000000;
		_delay_ms(100);
		PORTB=0b10000000;
		_delay_ms(100);
		
		PORTB=0b01000000;
		_delay_ms(100);
		PORTB=0b00100000;
		_delay_ms(100);
		PORTB=0b00010000;
		_delay_ms(100);
		PORTB=0b00001000;
		_delay_ms(100);
		PORTB=0b00000100;
		_delay_ms(100);
		PORTB=0b00000010;
		_delay_ms(100);

	}
	
}


/********************************************/

#define  PORTB    (*(volatile unsigned char *)0x38)
#define  DDRB    (*(volatile unsigned char *)0x37)
#define  PINB    (*(volatile unsigned char *)0x36)


#define  F_CPU   8000000
#include <util/delay.h>


int main(void)
{
	DDRB=0xff;
	
	
	while (1)
	{
		PORTB=0b00000001;
		_delay_ms(100);
		PORTB=0b00000011;
		_delay_ms(100);
		PORTB=0b00000111;
		_delay_ms(100);
		PORTB=0b00001111;
		_delay_ms(100);
		PORTB=0b00011111;
		_delay_ms(100);
		PORTB=0b00111111;
		_delay_ms(100);
		PORTB=0b01111111;
		_delay_ms(100);
		PORTB=0b11111111;
		_delay_ms(100);
		
		PORTB=0b01111111;
		_delay_ms(100);
		PORTB=0b00111111;
		_delay_ms(100);
		PORTB=0b00011111;
		_delay_ms(100);
		PORTB=0b00001111;
		_delay_ms(100);
		PORTB=0b00000111;
		_delay_ms(100);
		PORTB=0b00000011;
		_delay_ms(100);
		PORTB=0b00000001;

	}
	
}

/*************************************/

#define  PORTB    (*(volatile unsigned char *)0x38)
#define  DDRB    (*(volatile unsigned char *)0x37)
#define  PINB    (*(volatile unsigned char *)0x36)


#define  F_CPU   8000000
#include <util/delay.h>


int main(void)
{
	DDRB=0xff;
	
	
	while (1)
	{
		PORTB=0b10000001;
		_delay_ms(100);
		PORTB=0b11000011;
		_delay_ms(100);
		PORTB=0b11100111;
		_delay_ms(100);
		PORTB=0b11111111;
		_delay_ms(100);
		PORTB=0b11100111;
		_delay_ms(100);
		PORTB=0b11000011;
		_delay_ms(100);
		//PORTB=0b00000000;
		//_delay_ms(100);
		

	}
	
}

/**********************************************/