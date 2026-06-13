#include"header.h"
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
