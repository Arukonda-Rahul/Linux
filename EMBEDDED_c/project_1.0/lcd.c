//#define GPIOB_MODER *((int*)0x40020400)
//#define RCC_AHB1ENR *((int*)0x40023830)
//#define GPIOB_ODR *((int*)0x40020414)	
//#define STK_CTRL *((int *)0xE000E010)
//#define  STK_LOAD *((int *)0xE000E014)
//#define  STK_VAL *((int *)0xE000E018)
#include"header.h"
extern char buff[500];

//void KM_LCD_Init(void);
//void KM_DELAY(int x);
//void delay(int a);
//void write_low_nibble( unsigned char data );
//void write_high_nibble( unsigned char data );
//void KM_LCD_Write_Cmd(unsigned char data);
//void KM_LCD_Write_Data( unsigned char data);
void RCC_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
	{
		;
	}
}
void GPIOB_MODER_Config(void)
{
	GPIOB_MODER&=0xfffcf000; //clear 0,1,2,3,4,5,6,7,8,9,10,11,16,17 bits
	GPIOB_MODER|=0x00010555; //load 01 into 0,1,2,3,4,5,6,7,8,9,10,11,16,17 bits
	GPIOB_ODR&=(~(0x1<<5));  //clear rw=0
}
void KM_LCD_Init(void)
{	
	RCC_Init();
	GPIOB_MODER_Config();
	KM_DELAY(20);
	KM_LCD_Write_Cmd(0x33);
	KM_DELAY(1);
	KM_LCD_Write_Cmd(0x32);
	KM_LCD_Write_Cmd(0x0C);
	KM_LCD_Write_Cmd(0x01);
}
void KM_LCD_Write_Cmd(unsigned char data)
{
	GPIOB_ODR&=~(0x10); //rs=0
	write_high_nibble(data);
	write_low_nibble(data);
}

void KM_LCD_Write_Data(unsigned char data)
{
	GPIOB_ODR|=0x10; //rs=1
	write_high_nibble(data);
	write_low_nibble(data);
}

void write_low_nibble( unsigned char data )
{
	GPIOB_ODR&=0xfffffff0;  
	GPIOB_ODR|=data&0x0f;
	GPIOB_ODR|=0x100;
	KM_DELAY(10);
	GPIOB_ODR&=~(0x100);
}

void write_high_nibble( unsigned char data )
{
	GPIOB_ODR&=0xfffffff0; //pb0-4 clear
	GPIOB_ODR|=data>>4;
	GPIOB_ODR|=(0x100); //en=1
	KM_DELAY(10);
	GPIOB_ODR&=~(0x100);
}


void KM_LCD_Write_Str(unsigned char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		KM_LCD_Write_Data(str[i]);
	}
}



