        
        #include<lpc214x.h>
unsigned int value;
int main()
{
	PINSEL1=0x00080000;
	while(1)
	{
		value=0;
			DACR=((1<<16)|(value<<6));
					delay();
		value=1023;
			DACR=((1<<16)|(value<<6));
					delay();
	}
	return 0;
}

void delay()
{
int i;
for(i=0;i<2000;i++)
{
}
}

