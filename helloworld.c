       
        #include<lpc214x.h>
        #include<string.h>
        void delay(void);
        void lcd_init(void);
        void lcd_cmd(char cmd);
        void lcd_data(char data);
        void lcd_string(char *ptr);
        int main()
        {
        	PINSEL2=0X00000000;
        	IODIR1=0X03FF0000;
        	lcd_init();
        	while(1)
        {
        		lcd_cmd(0x80);
        		lcd_string("HELLO");
        		lcd_cmd(0XC0);
        		lcd_string("WORLD");
        }
        }
        void delay(void)
        {
        	unsigned int i,j;
        	for(i=0;i<1000;i++);
        	for(j=0;j<1000;j++);
        }
        void lcd_init()
        {
        	lcd_cmd(0X38);
        	lcd_cmd(0X0C);
        	lcd_cmd(0X06);
        	lcd_cmd(0X01);
        	lcd_cmd(0X80);
        }
        void lcd_cmd(char cmd)
        {
        	IOCLR1=0x03FF0000;
        	IOSET1=cmd<<18|0X000200000;
        	delay();
        	IOCLR1=0x03FF0000;
        }
        void lcd_data(char data)
        {
        	IOCLR1=0x03FF0000;
        	IOSET1=data<<18|0X000300000;
        	delay();
        	IOCLR1=0x03FF0000;
        }
        void lcd_string(char*ptr)
        {
        	while(*ptr)
        	lcd_data(*ptr++);
        }

