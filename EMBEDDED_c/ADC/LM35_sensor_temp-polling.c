#define RCC_AHB1ENR *((int*)0x40023830)
#define RCC_APB2ENR *((int*)0x40023844)
#define GPIOB_ODR *((int*)0x40020414)	
#define GPIOB_MODER *((int*)0x40020400)
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

int LM_VALUE=0;

void KM_DELAY(int x);
void KM_ADC_Read(void);
void KM_ADC_Init(void);
void GPIOC_MODER_Config(void);
void GPIO_PORT_C_INIT(void);
void KM_LCD_Init(void);
void KM_DELAY(int x);
void delay(int a);
void write_low_nibble( unsigned char data );
void write_high_nibble( unsigned char data );
void KM_LCD_Write_Cmd(unsigned char data);
void KM_LCD_Write_Data( unsigned char data);

void GPIO_PORT_B_INIT(void)
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
	{
		;
	}
}
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
void KM_LCD_Init(void)
{	
	KM_DELAY(20);
	KM_LCD_Write_Cmd(0x33);
	KM_DELAY(1);
	KM_LCD_Write_Cmd(0x32);
	KM_LCD_Write_Cmd(0x0C);
	KM_LCD_Write_Cmd(0x01);
}
void KM_LCD_Write_Cmd(unsigned char data)
{
	GPIOB_ODR&=~(0x10); //rs=0
	write_high_nibble(data);
	write_low_nibble(data);
}

void KM_LCD_Write_Data(unsigned char data)
{
	GPIOB_ODR|=0x10; //rs=1
	write_high_nibble(data);
	write_low_nibble(data);
}
void write_low_nibble( unsigned char data )
{
	GPIOB_ODR&=0xfffffff0;  
	GPIOB_ODR|=data&0x0f;
	GPIOB_ODR|=0x100;
	KM_DELAY(10);
	GPIOB_ODR&=~(0x100);

}

void write_high_nibble( unsigned char data )
{
	GPIOB_ODR&=0xfffffff0; //pb0-4 clear
	GPIOB_ODR|=data>>4;
	GPIOB_ODR|=(0x100); //en=1
	KM_DELAY(10);
	GPIOB_ODR&=~(0x100);
}
void KM_LCD_Write_Str(unsigned char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		KM_LCD_Write_Data(str[i]);
	}
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
int main()
{
	unsigned char str[]="Temp=";
	int h1=0,a,b=0;
	GPIO_PORT_B_INIT();
	GPIO_PORT_C_INIT();//port c initialisation
	GPIOC_MODER_Config();
	SYSTICK_INIT();
	KM_ADC_Init();
	while(1)
	{
		KM_DELAY(500);
		KM_ADC_Read();  //read adc o/p from pot
		KM_LCD_Init();
		KM_LCD_Write_Str(str);
		h1=reverse(LM_VALUE);
		a=h1;
    h1=h1%10;
		h1=h1+48;
		KM_LCD_Write_Data(h1);
    a=a/10;  
		a=a+48;
		KM_LCD_Write_Data(a);
	}
}



