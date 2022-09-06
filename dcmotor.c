
#include<lpc214x.h>		

void delay(void);
void dc_clock(void);
void dc_A_clock(void);

int main()
{
	
	PINSEL2 = 0x00000000;			// P1.0 to P1. 31 configured as GPIO
	
	IODIR1 = 0xFFFF0000;			// P1.16 to P1. 31 configured as ouput port
	
	while(1)
	{
		dc_A_clock();				// Function calling 
		delay();delay();delay();
		dc_clock();
		delay();delay();delay();			// Function calling 
	}
}

void delay(void)					// Delay Sub program
{
	unsigned int i,j;
	
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++);
}


void dc_A_clock(void)		                     // DC-motor anticlockwise rotation Sub program
{
	IOSET1 = 0x80000000;
	delay();
	IOCLR1 = 0x80000000;
	delay();
}

void dc_clock(void)			                         // DC-motor anticlockwise rotation Sub program
{
	IOSET1 = 0x40000000;
	delay();
	IOCLR1 = 0x40000000;
	delay();
}

