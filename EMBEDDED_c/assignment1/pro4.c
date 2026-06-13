/*
Lab Experiment 4: Use “SW_ENT” and declare “counter” global variable. Your program should increment counter
by one, every time switch is pressed. Note how the value of counter changes on each “ENTER SWITCH” press. Use 
debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?
*/


#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
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
void delay(void)
{
	int i=0;
	for(i=450000;i>0;i--)
	{
		;
	}
}
int c=0;
int main()
{
	SW_Init();
	SWENT_Config();
	while(1)
	{
		if(!(GPIOC_IDR&(0x1<<10)))
		{
			c++;
		}
		delay();
	}
}


