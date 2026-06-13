/*
Lab Experiment 7: Whenever SW_ENT Press turn ON BUZZER up to 250msec and Turn OFF BUZZER
*/

#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
void BUZZER_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
	{
		;
	}
}
void SW_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x4;
	while(!(RCC_AHB1ENR&0x4))
	{
		;
	}
}
void BUZZER_Config(void)
{
	GPIOB_MODER&=0xfcffffff; //clear25&24 bits
	GPIOB_MODER|=0x01000000; //load 01 into 25,24;
}
void SWENT_Config(void)
{
	GPIOC_MODER&=0xffcfffff; //clear 21&20 bits
	GPIOC_PUPDR&=0xffcfffff; //clear 21&20 bits
	GPIOC_PUPDR|=0x00100000; //clear 21&20 bits
}
void delay(int a)
{
	int i=a*2500;
	for(;i>0;i--)
	{
		;
	}
}
int  main()
{
	BUZZER_Init();
	BUZZER_Config();
	SW_Init();
	SWENT_Config();
	GPIOB_ODR&=~(0x1<<12); //BUZZER is off
	while(1)
	{
		if(!(GPIOC_IDR&(0x1<<10)))
		{
			GPIOB_ODR|=(0x1<<12);//RED LED is on
		}
		delay(250);
		GPIOB_ODR&=~(0x1<<12); //BUZZER is off
		
	}
}


