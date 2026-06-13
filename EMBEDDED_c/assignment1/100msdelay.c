#define GPIOB_MODER *((int *)0x40020400) 
#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIOB_ODR *((int *)0x40020414)
#define STK_CTRL *((int *)0xE000E010)
#define  STK_LOAD *((int *)0xE000E014)
#define  STK_VAL *((int *)0xE000E018)
	/*
	void display(void)
	{
		int i=300000;
		for(;i>0;i--);
	}*/
		void enable_rcc(void)
		{
			RCC_AHB1ENR |=(0x1<<1); //set bit 1.
			while(!(RCC_AHB1ENR & 0x2)); //wait until 1 bit value.
		}
		
		void red_led_config(void)
		{
			//configuration
			GPIOB_MODER&=0xf3ffffff; //clear 27 and 26th bit.
			GPIOB_MODER|=0x04000000; //load "01" in to 27,26.
		}
		void systick_init(void)
		{
			STK_CTRL|=0x05;	//SYSTEM CLOCK, INTERRUPT DISABLE AND ENABLE TIMER
			//counter enable
			STK_VAL=0x123;
			STK_LOAD=1600000;
		}
		


int main()
{
	enable_rcc();
	red_led_config();
	systick_init();
	while(1)
			{
				GPIOB_ODR &=~(0x1<<13); //RED LED is ON
				//display();
				while(((STK_CTRL &(0X01<<16))==0))
				{
					;
				}
				GPIOB_ODR|=(0x1<<13);// RED LED is OFF
				//display();
				while(((STK_CTRL &(0X01<<16))==0))
				{
					;
				}
			}
	return 0;
}

