/*Write an Embedded C Program Whenever SW_UP press RED LED is ON, whenever SW_DN press 
GREEN LED is ON using Falling edge GPIO interrupt.*/

#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
#define RCC_APB2ENR *((int*)0x40023844)
#define SYSCFG_EXTICR3 *((int*)0x40013810)
#define EXTI_FTSR *((int*)0x40013c0c)
#define EXTI_IMR *((int*)0x40013c00)
#define EXTI_PR *((int*)0x40013c14)
#define NVIC_ISER0 *((int*)0xE000E100)
		
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
void Switch_Interrupt_En(void)
{
	RCC_APB2ENR|=0x00004000; //Enable sys config clock
	SYSCFG_EXTICR3|=0x00000002; // pc8 acts as interrupt
	SYSCFG_EXTICR3|=0x00000020; // pc9 acts as interrupt
	EXTI_FTSR|=0x00000300; //pc8,9 config to falling edge int
	EXTI_IMR|=0x00000300; //enable pc8 and pc9 mask
	EXTI_PR|=0x300; //clear  pc8,9 int ack
	NVIC_ISER0|=0x00800000; //enable 23 interrupt
	
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
	Switch_Interrupt_En();
	//operation phase
	while(1)
	{
		;
		
	}
}
void EXTI9_5_IRQHandler(void)
{
		if(EXTI_PR&0x100)
		{
			GPIOB_ODR&=~(0x1<<13);//RED LED is on
			EXTI_PR|=0x100;
		}
		if(EXTI_PR&0x200)
		{
			GPIOB_ODR&=~(0x1<<14);//GREEN LED is on
			EXTI_PR|=0x200;
		}
}





