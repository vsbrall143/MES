
#include<lpc214x.h>							


void delay(void)
{ 
	unsigned int i,j;
	
	for(j=0;j<1000;j++)
		for(i=0;i<1000;i++);
}

int main()
{
	PINSEL2 = 0x00000000;					
	
	IODIR1 = 0xFF<<18;
	
	while(1)
	{ 
		
		IOSET1 = 0x3F << 18;												// To display zero (0-display)				(0x3F000000 - This value for common Anode)
		delay();delay();delay();delay();
		IOCLR1 = 0x3F << 18;;
		delay();delay();delay();delay();
		
		IOSET1 = 0x06 << 18;												// To display one (1-display)					(0x06000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x06 << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x5B << 18;												// To display two (2-display)					(0x5B000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x5B << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x4F << 18;												// To display Three (3-display)				(0x4F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x4F << 18;
		delay();delay();delay();delay();
		
		
		IOSET1 = 0x66 << 18;												// To display Four (4-display) 				(0x66000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x66 << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x6D << 18;												// To display Five (5-display) 				(0x6D000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x6D << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x7D << 18;												// To display Six (6-display) 				(0x7D000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x7D << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x07 << 18;												// To display Seven (7-display) 			(0x07000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x07 << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x7F << 18;												// To display Eight (8-display) 			(0x7F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x7F << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x6F << 18;												// To display nine (9-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x6F <<18;
		delay();delay();delay();delay();
			
		IOSET1 = 0x77 << 18;												// To display nine (A-display) 				(0x77000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x77 << 18;
		delay();delay();delay();delay();

		IOSET1 = 0x7C << 18;												// To display nine (B-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x7C << 18;
		delay();delay();delay();delay();
		
		
		IOSET1 = 0x39 << 18;												// To display nine (B-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x39 << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x1E << 18;												// To display nine (B-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x1E << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x79 << 18;												// To display nine (B-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x79 << 18;
		delay();delay();delay();delay();
		
		IOSET1 = 0x71 << 18;												// To display nine (B-display) 				(0x6F000000)
		delay();delay();delay();delay();
		IOCLR1 = 0x71 << 18;
		delay();delay();delay();delay();
		
		
		
	}
}

