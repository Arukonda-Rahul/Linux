#include"header.h"
extern int LM_VALUE;
char fetch[100]="GET /page.php?temp=00&hum=00&dev=544\r\n\r\n";
void PORTC_INIT()
{
	RCC_AHB1ENR |=0x04;        //to enable port-c (bit -1) for clock generation
	while(!(RCC_AHB1ENR &0x4))
	{
		;
	}
}

void GPIO_PORT_B_INIT(void)
{
	RCC_AHB1ENR|=0x2;
	while(!(RCC_AHB1ENR&0x2))
	{
		;
	}
}

void PORTC_CONFIG()
{
	GPIOC_MODER &=~(0x0000a000);      //clear pc-6,pc-7
	GPIOC_MODER |=0x0000a000;      //load '10' in pa-6,pa-7
	GPIOC_AFRL &=~(0x88000000);    //clear afrl 6,7 pins
	GPIOC_AFRL |=0x88000000;     //load 1000(data sheet) to afrl 6,7
}

void USART_CONF_INIT()
{
	RCC_APB2ENR |=0x1<<5;        //enable usart6 bit-5
	while(!(RCC_APB2ENR & 0x1<<5));  //check 5 bit 
	USART6_BRR=0x08b;             //baud rate  system clock/8*(2-0)* USARTDIV
	USART6_CR1&=~(0x200c);    //clear fields usrat,tx,rx(13,3,2)bits
	USART6_CR1|=0x200c;       //USART EN-1,TX-1,RX-1
}


int main()
{
	int ret=0;
	int h1=0,a;
	unsigned char str[]="Temp=";
	GPIO_PORT_B_INIT();
	SYSTICK_INIT();
  PORTC_INIT();
	PORTC_CONFIG();
	USART_CONF_INIT();
	KM_LCD_Init();
	KM_LCD_Write_Str(str);
	ret=Wifi_Init();
	adc_m();
	if(ret==0)
	{
		return -1;
	}
	while(1)
	{
		KM_ADC_Read(); 
		h1=reverse(LM_VALUE);
		a=h1;
    h1=h1%10;
		h1=h1+48;
		fetch[19]=h1;
		KM_LCD_Write_Data(h1);
    a=a/10;  
		a=a+48;
		fetch[20]=a;
		KM_LCD_Write_Data(a);
		KM_LCD_Write_Cmd(0x85);
		USART6_TX_STR_OUTCHAR("AT+CIPSTATUS\r\n");
		KM_DELAY(1000);
		USART6_TX_STR_OUTCHAR("AT+CIPSTART=\"TCP\",\"142.93.218.33\",80\r\n");
		KM_DELAY(1000);
		USART6_TX_STR_OUTCHAR("AT+CIPSEND=44\r\n");
		KM_DELAY(1000);
		USART6_TX_STR_OUTCHAR(fetch);
		KM_DELAY(1000);
		USART6_TX_STR_OUTCHAR("AT+CIPCLOSE\r\n");
	}
}

