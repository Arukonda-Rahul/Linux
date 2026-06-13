/*
Lab Experiment 3: Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses 
program stops at any one of the breakpoint.
*/

#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
void GREEN_RED_LED_Init(void)//wait until 1st bit value
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
void GREEN_LED_Config(void)
{
	GPIOB_MODER&=0xcfffffff; //clear29&28 bits
	GPIOB_MODER|=0x10000000; //load 01 into 29,28;
}
void RED_LED_Config(void)
{
	GPIOB_MODER&=0xf3ffffff; //clear27&26 bits
	GPIOB_MODER|=0x04000000; //load 01 into 27,26;
}
void SWUP_Config(void)
{
	GPIOC_MODER&=0xfffcffff; //clear16&17 bits
	GPIOC_PUPDR&=0xfffcffff; //clear16&17 bits
	GPIOC_PUPDR|=0x00010000;//load 01 into 16,17
}
void SWDN_Config(void)
{
	GPIOC_MODER&=0xfff3ffff; //clear18&19 bits
	GPIOC_PUPDR&=0xfff3ffff; //clear18&19 bits
	GPIOC_PUPDR|=0x00040000;//load 01 into 18,19
}
int main()
{
	GREEN_RED_LED_Init();
	SW_Init();
	RED_LED_Config();
	GREEN_LED_Config();
	SWUP_Config();
	SWDN_Config();
	GPIOB_ODR|=(0x1<<13); //RED LED is off
	GPIOB_ODR|=(0x1<<14); //GREEN LED is off
	//operation phase
	while(1)
	{
		if(!(GPIOC_IDR&(0x1<<8)))
		{
			GPIOB_ODR&=~(0x1<<13);//RED LED is on
		}
		if(!(GPIOC_IDR&(0x1<<9)))
		{
			GPIOB_ODR&=~(0x1<<14);//GREEN LED is on
		}
		
	}
}


