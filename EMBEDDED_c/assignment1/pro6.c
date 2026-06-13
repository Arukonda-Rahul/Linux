/*
Lab Experiment 6: Read SW_ENT, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED 
should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released
*/

#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
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
void SW_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x4;
	while(!(RCC_AHB1ENR&0x4))
	{
		;
	}
}
void SWENT_Config(void)
{
	GPIOC_MODER&=0xffcfffff; //clear 21&20 bits
	GPIOC_PUPDR&=0xffcfffff; //clear 21&20 bits
	GPIOC_PUPDR|=0x00100000; //clear 21&20 bits
}  
int  main()
{
	RED_LED_Init();
	RED_LED_Config();
	SW_Init();
	SWENT_Config();
	GPIOB_ODR|=(0x1<<13); //RED LED is off
	while(1)
	{
		if(!(GPIOC_IDR&(0x1<<10)))
		{
			GPIOB_ODR&=~(0x1<<13);//RED LED is on
		GPIOB_ODR|=(0x1<<13); //RED is off
		}
		
	}
}


