#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
#define GPIOC_MODER *((int*)0x40020800)
#define ADC_SR *((int*)0x40012000)
#define ADC_CR1 *((int*)0x40012004)
#define ADC_CR2 *((int*)0x40012008)
#define ADC_SMPR1 *((int*)0x4001200c)
#define ADC_SQR3 *((int*)0x40012034)
#define ADC_DR *((int*)0x4001204c)
#define STK_CTRL *((int *)0xE000E010)
#define  STK_LOAD *((int *)0xE000E014)
#define  STK_VAL *((int *)0xE000E018)
#define NVIC_ISER0 *((int*)0xE000E100)

void KM_DELAY(int x);
void KM_ADC_Read(void);
void KM_ADC_Init(void);
void GPIOC_MODER_Config(void);
	
int POT_VALUE=0;

void GPIO_PORT_C_INIT(void)
{
	RCC_AHB1ENR|=0x4;    //set port c(3rd bit)
	while(!(RCC_AHB1ENR&0x4))   //until bit is set
	{
		;
	}
}
void GPIOC_MODER_Config(void)
{
	GPIOC_MODER&=0xfffffff3;   //clear 2,3 bits
	GPIOC_MODER|=0x0000000c;		//load 11(analog mode) int0 2,3 bits
}
void KM_ADC_Init(void)
{
	RCC_APB2ENR|=(0x1<<8);
	while(!(RCC_APB2ENR&0x1<<8))
	{
		;
	}
	ADC_SMPR1|=0x07;//potentio meter activation in adc
	ADC_SQR3|=0x0B; //load 1011 in 0-3 positions to set adc_11 as 1st conversion
	ADC_CR1&=~(0x3<<24); //clear 24,25 positions to set 12 position  resolution
	ADC_CR2|=0x1<<10; //set 10th bit(ecos)
	ADC_CR1|=0x1<<5;
	ADC_CR2|=0x1; //set 0th bit(adon) to  turn on adc
}
void KM_ADC_Read(void)
{
	ADC_CR2|=0x1<<30;   //start conversion(enable software trigger)
	while(!(ADC_SR&(0x2)))		//if conversion completed eoc bit will set
	{
		;
	}
		POT_VALUE=ADC_DR;//collect data from ADC_DR data register
		ADC_CR2&=~(0x1<<30);//clear trigger
		KM_DELAY(500);
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
int main()
{
	GPIO_PORT_C_INIT();//port c initialisation
	GPIOC_MODER_Config();
	SYSTICK_INIT();
	KM_ADC_Init();
	while(1)
	{
		KM_ADC_Read();  //read adc o/p from pot
	}
}
void ADC_IRQHandler(void)
{
	POT_VALUE=ADC_DR;
}
