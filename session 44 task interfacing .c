 //ACU_PROG.C
 
#include "StdTypes.h"
#include "DIO_Int.h"

const LED_Array_on[8]={PINB0,PINB1,PINB2,PINB3,PINB4,PINB5,PINB6,PINB7};

 void LED_Count(u8 i)
{
	for(char x=0;x<i;x++)
	{
		DIO_WritePin(LED_Array_on[x],HIGH);
	}
}

void ALL_LED_OFF(void)
{
	for(char x=0;x<8;x++)
	{
		DIO_WritePin(LED_Array_on[x],LOW);
	}
}

void LED_ON(u8 i)
{
	DIO_WritePin(LED_Array_on[i],HIGH);
}

void LED_off(u8 i)
{
	DIO_WritePin(LED_Array_on[i],LOW);
}

/***********************************/
// ACU_Int.h


extern const LED_Array_on[8];

void LED_Count(u8 i);
void ALL_LED_OFF(void);

void LED_ON(u8 i);
void LED_off(u8 i);


/***********************/
optimize motor_stop

//motor_conf.c

/* modify num_of_motors from "motor_conf.h" 
the largest number of motors is 6 */

const MOTOR_t MOTOR_Array[NUM_OF_MOTORS][2]={ {M1_IN1,M1_IN2},
{M2_IN1,M2_IN2},
{M3_IN1,M3_IN2},
{M4_IN1,M4_IN2},
{M5_IN1,M5_IN2},
{M6_IN1,M6_IN2}};
 
 /***************/
 //motor_prog.c
 
void MOTOR_Stop(MOTOR_t motor)
{
	for(char x=0;x<NUM_OF_MOTORS;x++)
	{
		if(x==motor)
		{
			DIO_WritePin(MOTOR_Array[x][0],LOW);
			DIO_WritePin(MOTOR_Array[x][1],LOW);
		}
	}
	
	
}