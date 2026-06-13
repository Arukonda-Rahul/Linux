#define GPIOB_MODER *((int*)0x40020400)
#define RCC_AHB1ENR *((int*)0x40023830)
#define GPIOB_ODR *((int*)0x40020414)
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_PUPDR *((int*)0x4002080c)
#define GPIOC_IDR *((int*)0x40020810)
#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
#define GPIOA_MODER *((int*)0x40020000)
#define GPIOA_AFRH *((int*)0x40020024)
#define USART1_BRR *((int*)0x40011008)
#define USART_CR1 *((int*)0x4001100c)
#define USART_SR *((int*)0x40011000)
#define USART_DR *((int*)0x40011004)
#define STK_CTRL *((int *)0xE000E010)
#define  STK_LOAD *((int *)0xE000E014)
#define  STK_VAL *((int *)0xE000E018)

	

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
void USART1_Init(void)
{
	RCC_APB2ENR |=0x1<<4;   //set 4th bit to enable usart1
	while(!(RCC_APB2ENR&0x1<<4))
	{
		;
	}
	USART1_BRR=0x683;    //Baud Rate = System clock/8*(2-0)*USARTDIV ==16m/8*(2-0)*9600
	USART_CR1&=~(0x200c); //clear 13,3,2 bits UE,TE,RE
	USART_CR1|=0x200c; //  load 1 to enable 13,3,2 bits
}
void GPIOA_INIT(void)
{
	RCC_AHB1ENR |=0x1;    //set port A(1st  bit)
	while(!(RCC_AHB1ENR &0x1))   //until 1st bit is set
	{
		;
	}
}
void GPIOA_MODER_Config(void)
{
	GPIOA_MODER&=0xffc3ffff;   //clear 21:18 bits bits
	GPIOA_MODER|=0x00280000;	//load 10(alternate function mode) int 21:20, 19:18 bits
	GPIOA_AFRH&=0xfffff88f;   //clear 15:4 bits 
	GPIOA_AFRH|=0x00000770;    //load 0111 into 11:8,7:4 bits
}
void USART_TX_OUTCHAR(unsigned char out)
{
	while(!(USART_SR & 0x80));
	USART_DR=out;
}
unsigned char USART_RX_INCHAR(void)
{	
		int c=0;
		while(!(USART_SR & 0x20))
		{
			if(c==100)
			{
				break;
			}
							c++;
		}
		return (USART_DR & 0xff);
}


void SYSTICK_INIT(void)
{
	STK_CTRL|=0x05;
	STK_VAL=0x123;
}

void KM_DELAY(int x)
{
	STK_LOAD=x*16000;
	while((STK_CTRL&(0x1<<16))==0)
	{
		;
	}
}

char ch;
int main()
{
	GREEN_RED_LED_Init();
	SW_Init();
	GREEN_LED_Config();
	RED_LED_Config();
	SWUP_Config();
	SWDN_Config();
	GPIOB_ODR|=(0x1<<13); //RED LED is off
	GPIOB_ODR|=(0x1<<14); //GREEN LED is off
	GPIOA_INIT();
	GPIOA_MODER_Config();
	SYSTICK_INIT();
	USART1_Init();
	while(1)
	{
			ch=USART_RX_INCHAR();
			if(ch=='R')
			{
				GPIOB_ODR&=~(0x1<<13);//RED LED is on
			}
			if(ch=='G')
			{
				GPIOB_ODR&=~(0x1<<14);//GREEN LED is on
			}
			if(!(GPIOC_IDR&(0x1<<8)))
			{
				//GPIOB_ODR&=~(0x1<<13);//RED LED is on
				USART_TX_OUTCHAR('R');
			}		
			if(!(GPIOC_IDR&(0x1<<9)))
			{
				//GPIOB_ODR&=~(0x1<<14);//GREEN LED is on
				USART_TX_OUTCHAR('G');
			}
		
	}	
}
	
