


int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	
  sei();
  
//set prescaler 8 
//enable timer
  TCCR0=2;
 //ENABLE ov INTERRUPT
TIMSK=1;
u8 i=1,x=0;;
TCNT0=96;
    while (1) 
    {
		LCD_SetCursor(2,1);
		LCD_WriteNumber(x);
		x++;
		if(x==100)
x=0;
_delay_ms(500);
    }
}

/*
ISR(TIMER0_OV_vect)
{
	static u8 flag=0;
		
	if (flag==0)
	{
		DIO_WritePin(PINC0,HIGH);
		TCNT0=216;
		flag=1;

	}
	else if (flag==1)
	{
		DIO_WritePin(PINC0,LOW);
		TCNT0=96;
		flag=0;
	}
	
	
}

ISR(TIMER0_OV_vect)
{
	
	static u16 c1=0;
	
	c1++;
	TCNT0=216;
	if (c1==4)
	{
		DIO_WritePin(PINC0,HIGH);
	}
	else if (c1==4)
	{
		DIO_WritePin(PINC0,LOW);
		c1=0;
	}
	
	
}
*/


ISR(TIMER0_OV_vect)
{
	
	static u16 c=0;
	static u16 c1=0;
	c++;
    c1++;
	if (c==1953)
	{
		DIO_TogglePin(PINC0);
		c=0;
	}
	if (c1==3906)
	{
		DIO_TogglePin(PINC1);
	
		c1=0;
	}
	
}

/*

ISR(TIMER0_OV_vect)
{
	
	
	static u16 c1=0;
	c1++;
	if (c1==3907)
	{
		DIO_TogglePin(PINC4);
		TCNT0=192;
		c1=0;
	}
	
}

ISR(TIMER0_OV_vect)
{
	
	static u16 c1=0;
	
	c1++;
    TCNT0=6;
	if (c1==4000)
	{
		DIO_TogglePin(PINC4);
		
		c1=0;
	}
	*/