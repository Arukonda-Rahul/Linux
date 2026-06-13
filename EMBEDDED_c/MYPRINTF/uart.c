#include<stdarg.h>
#include<stdio.h>
#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
#define GPIOA_MODER *((int*)0x40020000)
#define GPIOA_AFRH *((int*)0x40020024)
#define USART1_BRR *((int*)0x40011008)
#define USART_CR1 *((int*)0x4001100c)
#define USART_SR *((int*)0x40011000)
#define USART_DR *((int*)0x40011004)
#define STK_CTRL *((int *)0xE000E010)
#define  STK_LOAD *((int *)0xE000E014)
#define  STK_VAL *((int *)0xE000E018)
void USART_Out_Str(char *s);
void KM_LCD_Init(void);
void KM_DELAY(int x);
void delay(int a);
void write_low_nibble( unsigned char data );
void write_high_nibble( unsigned char data );
void KM_LCD_Write_Cmd(unsigned char data);
void KM_LCD_Write_Data( unsigned char data);
void Myprintf(char *,...);



void SYSTICK_INIT(void)
{
	STK_CTRL|=0x05;
	STK_VAL=0x123;
}

void KM_DELAY(int x)
{
	STK_LOAD=x*16000;
	while((STK_CTRL&(0x1<<16))==0)
	{
		;
	}
}
void USART1_Init(void)
{
	RCC_APB2ENR |=0x1<<4;   //set 4th bit to enable usart1
	while(!(RCC_APB2ENR&0x1<<4))
	{
		;
	}
	USART1_BRR=0x683;    //Baud Rate = System clock/8*(2-0)*USARTDIV ==16m/8*(2-0)*9600
	USART_CR1&=~(0x200c); //clear 13,3,2 bits UE,TE,RE
	USART_CR1|=0x200c; //  load 1 to enable 13,3,2 bits
}
void GPIOA_INIT(void)
{
	RCC_AHB1ENR |=0x1;    //set port A(1st  bit)
	while(!(RCC_AHB1ENR &0x1))   //until 1st bit is set
	{
		;
	}
}
void GPIOA_MODER_Config(void)
{
	GPIOA_MODER&=0xffc3ffff;   //clear 21:18 bits bits
	GPIOA_MODER|=0x00280000;	//load 10(alternate function mode) int 21:20, 19:18 bits
	GPIOA_AFRH&=0xfffff88f;   //clear 15:4 bits 
	GPIOA_AFRH|=0x00000770;    //load 0111 into 11:8,7:4 bits
}
void USART_OutChar(unsigned char out)
{
	while(!(USART_SR & 0x80));
	USART_DR=out;
}
void USART_OutStr(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		USART_OutChar(s[i]);
	}
}

unsigned char USART_RX_INCHAR(void)
{
	while(!(USART_SR & 0x20));
	return (USART_DR & 0xff);
}



