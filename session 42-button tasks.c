while (1) 
    {
		
		SET_BIT(PORTB,i);
		if (!READ_BIT(PINC,0))
		{
			i++;
			if (i==8)
			{
				i=0;
			}
			while(!READ_BIT(PINC,0));
			PORTB=0;
		}
		if (!READ_BIT(PINC,1))
		{
			i--;
			if (i==255)
			{
				i=7;
			}
			while(!READ_BIT(PINC,1));
			PORTB=0;
		}
		
		
		//_delay_ms(300);
		
				
    }
	
	
	
	
	 while (1) 
    {
		
		
		while (!READ_BIT(PINC,0))
		{
			i++;
			if (i==8)
			{
				i=0;
			}		
			PORTB=0;
				SET_BIT(PORTB,i);
				_delay_ms(300);			
		}
		while (!READ_BIT(PINC,1))
		{
			i--;
			if (i==255)
			{
				i=7;
			}
			
			PORTB=0;
			SET_BIT(PORTB,i);			
			_delay_ms(300);
		}
		
		
				
    }
	

	
	 while (1) 
    {
			
		if (flag==0)
		{
			i++;
			if (i==8)
			{
				i=0;
			}			
		}
		else
		{
				
			i--;
			if (i==255)
			{
				i=7;
			}			
		}
		
		PORTB=0;
		SET_BIT(PORTB,i);
		
		for (x=0;x<100;x++)
		{
			if (!READ_BIT(PINC,0))
			{
				flag^=1;			
				
				while(!READ_BIT(PINC,0));
				break;
				
			}		
			_delay_ms(10);
		}
		
		
				
    }
	
	
	
	
	