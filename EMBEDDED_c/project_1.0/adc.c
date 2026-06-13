#include"header.h"

int LM_VALUE=0;
void GPIOC_MODER_Config(void)
{
	GPIOC_MODER&=0xfffffffc;   //clear 0,1 bits  port c
	GPIOC_MODER|=0x00000003;		//load 11(analog mode) int0 2,3 bits port c
	GPIOB_MODER&=0xfffcf000; //clear 0,1,2,3,4,5,6,7,8,9,10,11,16,17 bits     //port b for led
	GPIOB_MODER|=0x00010555; //load 01 into 0,1,2,3,4,5,6,7,8,9,10,11,16,17 bits    //port b for led
	GPIOB_ODR&=(~(0x1<<5));  //clear rw=0
}
void KM_ADC_Init(void)
{
	RCC_APB2ENR|=(0x1<<8);
	while(!(RCC_APB2ENR&0x1<<8))
	{
		;
	}
	ADC_SMPR1|=0x07;//potentio meter activation in adc
	ADC_SQR3|=0x0A; //load 1011 in 0-3 positions to set adc_10 as 1st conversion
	ADC_CR1&=~(0x3<<24); //clear 24,25 positions to set 12 position  resolution
	ADC_CR2|=0x1<<10; //set 10th bit(ecos)
	ADC_CR2|=0x1; //set 0th bit(adon) to  turn on adc
}
void KM_ADC_Read(void)
{
	ADC_CR2|=0x1<<30;   //start conversion(enable software trigger)
	while(!(ADC_SR&(0x2)))		//if conversion completed eoc bit will set
	{
		;
	}
		LM_VALUE=ADC_DR;//collect data from ADC_DR data register
		LM_VALUE=((LM_VALUE*3000)/(4096*10));
		ADC_CR2&=~(0x1<<30);//clear trigger
		KM_DELAY(500);
}
int reverse(int a)
{
	int LM=a;
	int rem,rev=0;
	while ( LM!= 0) 
	{
		rem = LM% 10;
		rev = rev* 10 + rem;
		LM/= 10;
	}
	return rev;
}
void adc_m(void)
{
	GPIOC_MODER_Config();
	KM_ADC_Init();
}




