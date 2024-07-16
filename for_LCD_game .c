
main.c
======


u8 escape (u8 arrow)
{
	while(READ_BIT(PIND,2)==0)
	{
		LCD_Clear();
		LCD_SetCursor(2,1);
		LCD_WriteChar(0);
		LCD_SetCursor(1,14);
		LCD_WriteChar(1);
		LCD_SetCursor(2,2);
		LCD_WriteChar(2);
		LCD_SetCursor(2,arrow);
		LCD_WriteChar(3);
		arrow++;
		_delay_ms(200);
	}
	return arrow;
}


int main(void)
{
	DIO_Init();
	LCD_Init();
	
	u8  customChar_1stman[] = {
		0x06,
		0x06,
		0x04,
		0x0E,
		0x15,
		0x04,
		0x0A,
		0x11
	};
	u8 customChar_2ndman[] = {
		0x0C,
		0x0C,
		0x04,
		0x0E,
		0x15,
		0x04,
		0x0A,
		0x11
	};
	u8 customchar_Arrow[]=  {
		0x00,
		0x00,
		0x00,
		0x02,
		0x0F,
		0x02,
		0x00,
		0x00
	};
	u8 customchar_Arch[]= {
		0x00,
		0x08,
		0x04,
		0x02,
		0x1F,
		0x02,
		0x04,
		0x08
	};
	
	u8 customchar_Die[]= {
		0x00,
		0x00,
		0x04,
		0x18,
		0x14,
		0x18,
		0x04,
		0x00
	};
	
	s8 i;
	
	LCD_CustomChar(0,customChar_1stman);
	LCD_CustomChar(1,customChar_2ndman);
	LCD_CustomChar(2,customchar_Arch);
	LCD_CustomChar(3,customchar_Arrow);
	LCD_CustomChar(4,customchar_Die);
	
	while(1)
	{
		
		for(i=3;i<=16;i++)
		{
			LCD_Clear();
			LCD_SetCursor(2,1);
			LCD_WriteChar(0);
			LCD_SetCursor(2,14);
			LCD_WriteChar(1);
			LCD_SetCursor(2,2);
			LCD_WriteChar(2);
			LCD_SetCursor(2,i);
			LCD_WriteChar(3);
			
			
			if(READ_BIT(PIND,2)==0)
			{
				while(READ_BIT(PIND,2)==0)
				{
					i=escape(i);
				}
			}
			if(i==14)
			{
				LCD_Clear();
				LCD_SetCursor(2,1);
				LCD_WriteChar(0);
				LCD_SetCursor(2,14);
				LCD_WriteChar(4);// 4 >> die
				LCD_SetCursor(2,2);
				LCD_WriteChar(2);
				_delay_ms(200);
				i=3;
			}
			_delay_ms(200);
		}
	}
	
	
	
}
	