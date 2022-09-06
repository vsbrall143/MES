

        #include<LPC214x.h>
        #include<String.h>
        void delay(void);
        void LCD_init(void);
        void LCD_cmd(char cmd);
        void LCD_data(char data);
        void LCD_String(char *ptr);
        void adc(void);
        void hex_dec(unsigned int lcd_data);
        
        int main()
        {
        	PINSEL0=0x00000000;
        	PINSEL1=0x01000000;
        	PINSEL2=0x00000000;
        	IODIR1=0x03FF0000;
        	LCD_init();
        	LCD_cmd(0x01);
        	LCD_cmd(0x80);
        	LCD_String("WELCOME TO");
        	delay();
        	LCD_cmd(0xc0);
        	delay();
        	LCD_String("SJBIT");
        	delay();
        	while(1)
        	{
        		adc();
        	}
        }	
        
        void delay()
        {
        	unsigned int i,j;
        	for(i=0;i<=1000;i++)
        		for(j=0;j<=1000;j++);
        }
        
        void LCD_init()
        {
        	LCD_cmd(0x38);
        	LCD_cmd(0x0c);
        	LCD_cmd(0x06);
        	LCD_cmd(0x01);
        	LCD_cmd(0x80);
        }
        
        void LCD_cmd(char cmd)
        {
        	IOCLR1=0x03FF0000;
        	IOSET1=cmd<<18|0X00020000;
        	delay();
        	IOCLR1=0x03FF0000;
        }
        void LCD_data(char data)
        {
        	IOCLR1=0x03FF0000;
        	IOSET1=data<<18|0X00030000;
        	delay();
        	IOCLR1=0x03FF0000;
        }
        void LCD_String(char *ptr)
        {
        	while( *ptr)
        		LCD_data(*ptr++);
        }
        
        void adc()
        {
        	unsigned int temp;
        	LCD_cmd(0x01);
        	LCD_cmd(0x80);
        	LCD_String("ADC");
        	AD0CR=0x01200402;
        	while(!(AD0GDR & 0x80000000));
        
        	temp=(AD0GDR & 0x0000FFc0)>>6;
        	hex_dec(temp);
        	delay();
        }
        
        void hex_dec(unsigned int lcd_data)
        {
        	unsigned int d1,d2,d3,d4;
        	d1=lcd_data%0x0a;
        	
        	lcd_data=lcd_data/0x0a;
        	d2=lcd_data%0x0a;
        	
        	lcd_data=lcd_data/0x0a;
        	d3=lcd_data%0x0a;
        	
        	lcd_data=lcd_data/0x0a;
        	d4=lcd_data%0x0a;
        	
        	LCD_data(d4+0x30);
        	LCD_data(d3+0x30);
        	LCD_data(d2+0x30);
        	LCD_data(d1+0x30);
        }
        


        


      
