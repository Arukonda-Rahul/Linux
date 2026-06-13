/*Write a program Request an interrupt on the Falling edge of ENTER Switch, whenever the user 
button is pressed and increment a counter in the interrupt and RED LED is ON.*/

#define GPIOB_MODER *((int*)0x40020400)  
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define RCC_APB2ENR *((int*)0x40023844)
#define SYSCFG_EXTICR3 *((int*)0x40013810)
#define EXTI_IMR *((int*)0x40013c00)
#define NVIC_ISER1 *((int*)0xE000E104)
#define EXTI_FTSR *((int*)0x40013c0c)
#define EXTI_PR *((int*)0x400013c14)	
	
void RED_LED_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x2;      //enable clock fot port b
	while(!(RCC_AHB1ENR&0x2))   //wait until 1st bit value
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
void Switch_Interrupt_En(void)
{
	RCC_APB2ENR|=0x00004000; //Enable sys config clock
	SYSCFG_EXTICR3|=0x00000200; // pc10 acts as interrupt
	EXTI_IMR|=0x00000400; //enable pc10 mask
	EXTI_FTSR|=0x00000400; //pc10 config to falling edge int
	NVIC_ISER1|=0x00000100; //enable 40 interrupt
	EXTI_PR=0x400; //clear  pc10 int ack
	
}
int counter=0;
int main()
{
	RED_LED_Init();
	RED_LED_Config();
	GPIOB_ODR|=(0x1<<13);
	SW_Init();
	SWENT_Config();
	Switch_Interrupt_En();
	while(1)
	{
		;
	}
}

void EXTI15_10_IRQHandler(void)
{
	if(EXTI_PR&0x400)
	{
		GPIOB_ODR&=~(0x1<<13);
		counter++;
		EXTI_PR|=0x400;  //clear the pending register by setting the bit
	}
}


