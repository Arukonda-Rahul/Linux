#include<stdio.h>
#include<stdarg.h>
void USART1_Init(void);
void GPIOA_INIT(void);
void GPIOA_MODER_Config(void);
void USART_OutChar(unsigned char out);
void USART_OutStr(char* out);
void USART_OutDec(unsigned int out);
void USART_OutHex(unsigned int out);
void USART_OutOct(unsigned int out);
void USART_OutChar(unsigned char out);
void USART_OutStr(char *s);
void KM_LCD_Init(void);
void KM_DELAY(int x);
void delay(int a);
void RCC_Init(void);
void write_low_nibble( unsigned char data );
void write_high_nibble( unsigned char data );
void KM_LCD_Write_Cmd(unsigned char data);
void KM_LCD_Write_Data( unsigned char data);
void GPIOB_MODER_Config(void);
void KM_DELAY(int x);
void SYSTICK_INIT(void);
void KM_LCD_Write_Str(unsigned char str[]);
char *convert(unsigned int num, int base);

void Myprintf(char *,...); //Our printf function
char* convert(unsigned int, int); //Convert integer number into octal, hex, etc.
int main()
{
	GPIOA_INIT();
	GPIOA_MODER_Config();
	USART1_Init();
	RCC_Init();
	SYSTICK_INIT();
	GPIOB_MODER_Config();
	KM_LCD_Init();
		Myprintf(" KM%c%s%d%x%o",'a',"HII",10,15,15);
	return 0;
}

void Myprintf(char* format,...)
{
	char *traverse;
	unsigned int i;
	char *s;
//Module 1: Initializing Myprintf's arguments
	va_list arg;
	va_start(arg, format);
	for(traverse = format; *traverse != '\0'; traverse++)
	{
		while( *traverse != '%' )
		{	
			USART_OutChar(*traverse);
			KM_LCD_Write_Data(*traverse);
			traverse++;
		}
		traverse++;
//Module 2: Fetching and executing arguments
	switch(*traverse)
	{
		case 'c' : i = va_arg(arg,int); //Fetch char argument
		USART_OutChar(i);	
		KM_LCD_Write_Data(i);
		break;
		case 'd' : i = va_arg(arg,int); //Fetch Decimal/Integer argument
		if(i<0)
		{
			i = -i;
			USART_OutChar('-');
			KM_LCD_Write_Data('-');
		}
		USART_OutStr(convert(i,10));
		break;
		case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation
		USART_OutStr(convert(i,8));
		KM_LCD_Write_Str(convert(i,8));
		break;
		case 's': s = va_arg(arg,char *); //Fetch string
		USART_OutStr(s);
		KM_LCD_Write_Str(s);
		break;
		case 'x': i = va_arg(arg,unsigned int); //Fetch Hexadecimal representation
		USART_OutStr(convert(i,16));
		KM_LCD_Write_Str(convert(i,16));
		
		break;
		}
	}
//Module 3: Closing argument list to necessary clean-up
	va_end(arg);
}
	char *convert(unsigned int num, int base)
	{
	char Representation[]= "0123456789ABCDEF";
	char buffer[50];
	char *ptr;
	ptr = &buffer[49];
	*ptr = '\0';
	do
	{
		*--ptr = Representation[num%base];
	num /= base;
	}
	while(num != 0);
	return(ptr);
}
