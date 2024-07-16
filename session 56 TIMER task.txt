 // for 0.25 sec	& prescaler 8
 
 
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
	TCNT0=6;
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


ISR(TIMER0_OV_vect) //for 0.25 sec
{
	static u8 counter=0;
	counter++;
	TCNT0=6;
	if(counter==250)
	{
		DIO_TogglePin(PINC0);
		counter=0;
	}
}

/**********************************************************/
// for 0.5 sec	& prescaler 8

ISR(TIMER0_OV_vect) 
{
	static u16 counter=0;
	counter++;
	TCNT0=6;
	if(counter==1000)
	{
		DIO_TogglePin(PINC0);
		counter=0;
	}
}
/*************************************************************/
// for 1 sec & prescaler 64


int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	PORTB=0;
	sei();
  
	
	TCCR0=3; // prescaler 64 <<<<<<<<<<<<<<<<
	TIMSK=1;
	u8 i=1,x=0;;
	TCNT0=6;
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


ISR(TIMER0_OV_vect) 
{
	static u16 counter=0;
	counter++;
	TCNT0=6;
	if(counter==500)
	{
		DIO_TogglePin(PINB0);
		counter=0;
	}
}
/********************************/ 
1) task 2
50KHZ , D.C.=50%

prescaler 8


int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	PORTB=0;
	sei();
  
	TCCR0=2; // prescaler 8 
	TIMSK=1;
	u8 i=1,x=0;
	TCNT0=246;
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


ISR(TIMER0_OV_vect) // every 10 tick
{
	DIO_TogglePin(PINC0);
	TCNT0=246;
}
/***************************/

5 KHZ , D.C.=50%
prescaler 8 


int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	PORTB=0;
	sei();
  
	TCCR0=2; // prescaler 8 
	TIMSK=1;
	u8 i=1,x=0;
	TCNT0=156;
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


ISR(TIMER0_OV_vect) // every 100 tick
{
	DIO_TogglePin(PINC0);
	TCNT0=146;
}
/**********************************/
500KHZ , D.C.=50%
prescaler 8

every one tick >> toggle pin


int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	PORTB=0;
	sei();
  
	TCCR0=2; // prescaler 8 
	TIMSK=1;
	u8 i=1,x=0;
	TCNT0=255;
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


ISR(TIMER0_OV_vect) 
{
	DIO_TogglePin(PINC0);
	TCNT0=255;
}

/*******************************/
>>> important <<<
500KHZ  , D.C.=10%
 Prescaler = 1.6
 
 
 
 /*********************************/
 PWM 100HZ , 50%
 prescaler 8 
 
 
int main(void)
{
	
	DIO_Init();
	//MOTOR_Init();
	LCD_Init();
	KEYPAD_Init();
	
	PORTB=0;
	sei();
  
	TCCR0=2; // prescaler 8 
	TIMSK=1;
	u8 i=1,x=0;
	TCNT0=6;
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


ISR(TIMER0_OV_vect)
{
	static u16 counter=0;
	counter++;
	TCNT0=6;
	if(counter==20)
	{
		DIO_TogglePin(PINB0);
		counter=0;
	}
}

/********************************************/
PWM		 50HZ , 50%
prescaler 16

/********************************************/
PWM  20HZ , 50%
prescaler 32


/*********************************************/
