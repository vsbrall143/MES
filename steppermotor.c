#include<LPC214X.h>
void delay(void);
void Stepper_clock(void);
void Stepper_Aclock(void);
int main()
{
	PINSEL2=0X00000000;
	IODIR1=0X0F<<26;
	while(1)
	{
	    Stepper_clock();
	       delay();
	    Stepper_Aclock();
	       delay();
	}
}
void delay(void)
	 
{
	 unsigned int i,j;
	 for(i=0;i<1000;i++)
	   for(j=0;j<1000;j++);
 }
void Stepper_Aclock(void)
{
	unsigned int i;
	for(i=0;i<5;i++)
	{
	   IOSET1=0X9<<26;
	   delay();
	   IOCLR1=0X9<<26;
	   
	   IOSET1=0XC<<26;
	   delay();
	   IOCLR1=0XC<<26;
	   
	   IOSET1=0X6<<26;
	   delay();
	   IOCLR1=0X6<<26;
	   
             IOSET1=0X3<<26;
	   delay();
	   IOCLR1=0X3<<26;
	}
}

void stepper_clock(void)		
{
	unsigned int i;
	for(i=0;i<5;i++)
	{
	   IOSET1=0X3<<26;
	   delay();
	   IOCLR1=0X3<<26;
	   
	   IOSET1=0X6<<26;
	   delay();
	   IOCLR1=0X6<<26;
	   
	   IOSET1=0Xc<<26;
	   delay();
	   IOCLR1=0Xc<<26;
	   
             IOSET1=0X9<<26;
	   delay();
	   IOCLR1=0X9<<26;
	   
	   IOSET1=0X3<<26;
	   delay();
	   IOCLR1=0X3<<26;
	}
}
