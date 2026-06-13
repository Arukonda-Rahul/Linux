/*
Lab Experiment 1: 
Toggle RED LED ON time is 50ms and RED LED OFF time is 1300ms
*/

#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
void delay1();
void delay2();
#include<stdio.h>
void RED_LED_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
	{
		;
	}
}
void RED_LED_Config(void)
{
	GPIOB_MODER&=0xf3ffffff; //clear27&26 bits
	GPIOB_MODER|=0x04000000; //load 01 into 27,26;
}

int  main()
{a
	RED_LED_Init();
	RED_LED_Config();
	//operation phase
	while(1)
	{
		GPIOB_ODR&=~(0x1<<13);//RED LED is on
		delay1();
		GPIOB_ODR|=(0x1<<13); //RED LED is off
		delay2();
	}
}

void delay1(void)
{
	int i=125000;
	for(;i>0;i--)
	{
		;
	}
}
void delay2(void)
{
	int i=3250000;
	for(;i>0;i--)
	{
		;
	}
}



