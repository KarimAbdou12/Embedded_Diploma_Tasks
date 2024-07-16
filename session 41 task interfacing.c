
int main(void)
{
	char flag=0;
	DDRD=0;
	DDRB=0xff;
	PORTB=1;
	while (1)
	{
		if(READ_BIT(PIND,2)==0)
		{
			flag=1;
		}
		if(READ_BIT(PIND,3)==0)
		{
			flag=0;
		}
		if(0==flag)
		{
			_delay_ms(100);
			PORTB=PORTB<<1;
			if(0==PORTB)
			{
				PORTB=1;
			}
		}
		else
		{
			_delay_ms(100);
			PORTB=PORTB>>1;
			if(0==PORTB)
			{
				PORTB=128;
			}
		}
		
	}
	
}

/************************************/
int main(void)
{
	char flag=0;
	DDRD=0;
	DDRB=0xff;
	PORTB=1;
	while (1)
	{
		if(READ_BIT(PIND,2)==0)
		{
			_delay_ms(100);
			PORTB=PORTB<<1;
			if(0==PORTB)
			{
				PORTB=1;
			}
		}
		if(READ_BIT(PIND,3)==0)
		{
			_delay_ms(100);
			PORTB=PORTB>>1;
			if(0==PORTB)
			{
				PORTB=128;
			}
		}
		
	}
	
}
/*****************************************/
int main(void)
{
	unsigned char flag=0;
	DDRD=0;
	DDRB=0xff;
	PORTB=1;
	while (1)
	{
		if(flag%2)
		{
			_delay_ms(100);
			PORTB=PORTB<<1;
			if(0==PORTB)
			{
				PORTB=1;
			}
		}
		else
		{
			_delay_ms(100);
			PORTB=PORTB>>1;
			if(0==PORTB)
			{
				PORTB=128;
			}
		}
			
		if(READ_BIT(PIND,2)==0)
		{
			flag++;
		}
		_delay_ms(30);
		
	}
	
}
/*************************************/
