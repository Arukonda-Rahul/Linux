#define GPIOB_MODER *((int*)0x40020400)
#define GPIOB_ODR *((int*)0x40020414)	
#define GPIOB_ODR *((int*)0x40020414)	
#define GPIOC_MODER *((int*)0x40020800)
#define GPIOC_AFRL *((int*)0x40020820)
	
#define RCC_APB2ENR *((int*)0x40023844)
#define RCC_AHB1ENR *((int*)0x40023830)
	
#define STK_CTRL *((int *)0xE000E010)
#define  STK_LOAD *((int *)0xE000E014)
#define  STK_VAL *((int *)0xE000E018)

#define USART6_BRR *((int*)0x40011408) 
#define USART6_CR1 *((int*)0x4001140C)
#define USART6_SR *((int*)0x40011400)
#define USART6_DR *((int*)0x40011404)
	
#define ADC_SR *((int*)0x40012000)
#define ADC_CR1 *((int*)0x40012004)
#define ADC_CR2 *((int*)0x40012008)
#define ADC_SMPR1 *((int*)0x4001200c)
#define ADC_SQR3 *((int*)0x40012034)
#define ADC_DR *((int*)0x4001204c)

void KM_LCD_Init(void);
void KM_DELAY(int x);
void delay(int a);
void write_low_nibble( unsigned char data );
void write_high_nibble( unsigned char data );
void KM_LCD_Write_Cmd(unsigned char data);
void KM_LCD_Write_Data( unsigned char data);
void lcd_exe(void);
void SYSTICK_INIT(void);
int Wifi_Init(void);
void USART6_TX_STR_OUTCHAR(char *s);
void KM_LCD_Write_Str(unsigned char str[]);
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
void adc_m(void);
int reverse(int a);


