#include"header.h"
unsigned char buff[500];

void USART6_TX_OUTCHAR(unsigned char out)
{
	while(!(USART6_SR & 0x80));
	USART6_DR=out;
}
unsigned char USART6_RX_INCHAR(void)
{
	while(!(USART6_SR & 0x20));
	return (USART6_DR & 0xff);
}
void USART6_TX_STR_OUTCHAR(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		USART6_TX_OUTCHAR(s[i]);
	}
}
int WIFI_RESPONSE()
{
	int i=0;
	for(i=0;i<500;i++)
	{
		buff[i]=USART6_RX_INCHAR();
		if((buff[i]=='K')&&buff[i-1]=='O')
		{
			return 1;
		}
	}
	return 0;
}

int Wifi_Init(void)
{
	int ret;
	USART6_TX_STR_OUTCHAR("AT\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+RST\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CWMODE=3\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CWJAP=\"KM-2.4G\",\"9963111084\"\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CIFSR\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CIPMUX=0\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CWLAP\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
	USART6_TX_STR_OUTCHAR("AT+CIPMODE=0\r\n");
	ret=WIFI_RESPONSE();
	if(ret==0)
	{
		return 0;
	}
	return 1;
}

