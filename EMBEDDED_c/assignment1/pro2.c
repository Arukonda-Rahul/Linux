/*
Lab Experiment 2: 
Airplane wing Lights blinking Delays: 
USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.
USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.
*/



#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
void delay(int a);
	
void GREEN_RED_LED_Init(void)//wait until 1st bit value
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
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
int main()
{
	GREEN_RED_LED_Init();
	GREEN_LED_Config();
	RED_LED_Config();
	//operation phase
	while(1)
	{
		GPIOB_ODR=GPIOB_ODR&(~(0x1<<14))&&GPIOB_ODR&(~(0x1<<13));//GREEN RED LED is on
		delay(125000);
		GPIOB_ODR|=0x1<<14;//GREEN LED is OFF
		delay(125000);
		GPIOB_ODR|=0x1<<13;//RED LED IS OFF 
		delay(625000);
		GPIOB_ODR=GPIOB_ODR&(~(0x1<<14))&&GPIOB_ODR&(~(0x1<<13));//GREEN RED LED is on
		delay(125000);
		GPIOB_ODR|=0x1<<14;//GREEN LED is OFF
		delay(375000);
		GPIOB_ODR|=0x1<<13;//RED LED IS OFF 
		delay(1250000);
		
	}
}
void delay(int a)
{
	int i;
	for(i=a;i>0;i--)
	{
		;
	}
}


