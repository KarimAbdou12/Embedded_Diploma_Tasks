// dc motor with H_bridge

int main(void)
{
	DDRC=0xff;
	DDRD=0;
	PORTC=0;
	unsigned char flag=0;
	
	while(1)
	{
		if(READ_BIT(PIND,2)==0)
		{
			flag++;
		}
		if(flag%2)
		{
			_delay_ms(100);
			SET_BIT(PORTC,0);
			CLR_BIT(PORTC,1);
		}
		else
		{
			_delay_ms(100);
			CLR_BIT(PORTC,0);
			SET_BIT(PORTC,1);
		}
		
	}
	
}
/*********************************************/
// 2 relay with dc motor

int main(void)
{
	DDRC=0xff;
	DDRD=0;
	PORTC=0;
	unsigned char flag=0;
	
	while(1)
	{
		if(READ_BIT(PIND,2)==0)
		{
			flag++;
		}
		if(flag%2)
		{
			_delay_ms(100);
			SET_BIT(PORTC,4);
			CLR_BIT(PORTC,3);
		}
		else
		{
			_delay_ms(100);
			CLR_BIT(PORTC,4);
			SET_BIT(PORTC,3);
		}
		
	}
	
}
/************************************/