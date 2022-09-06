#include<lpc214x.h>
void delay(void);
unsigned int a=0x0000000C0,j=0;
int main ()
{
  PINSEL0=0x00000000;
  PINSEL1=0x00000000;
  IODIR0=0xFF<<16;
  while(1)
  {
    for(j=0;j<=8;j++)
    {
         IOSET0=a<<16;
         delay();
         IOCLR0=a<<16;
         delay();
         a=(a<<1);
    }
    
    a=0x3;
    
    for(j=0;j<=8;j++)
    {
        IOSET0=a<<16;
        delay();
        IOCLR0=a<<16;
        a=(a>>1);
    }
    
    a=0x000000C0;
  }
}
void delay(void)
{
	
  unsigned int i,j;
  for(i=0;i<1000;i++)
  for(j=0;j<1000;j++);
}	
				
				
		
		
		
