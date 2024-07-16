main.c
======


void _1st_line (void)
{
	s8 i=1;
	for(i=1;i<=12;i++)
	{
		LCD_SetCursor(1,i);
		LCD_WriteString("karim");
		_delay_ms(300);
		LCD_Clear();
	}
}

int main(void)
{
	DIO_Init();
	LCD_Init();
	
	s8 i=1,j=-3;
	_1st_line();
	i=13;
	while(1)
	{
		LCD_SetCursor(1,i);
		LCD_WriteString("karim");

		LCD_SetCursor(1,0x40+j);
		LCD_WriteString("karim");
		
		if(j==12)
		{
			i=-4;
		}
		if(i==12)
		{
			j=-4;
		}		
		_delay_ms(300);
		LCD_Clear();
		i++;
		j++;
		
	}
}
