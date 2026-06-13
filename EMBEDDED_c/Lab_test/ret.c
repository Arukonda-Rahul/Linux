/*
take one unsigned int a=0xaabbccdd,retrieve and print
values separately like "aab","bccdd".*/


#include<stdio.h>
int main()
{
	int i;
	unsigned int a=0xaabbccdd,b,c,d,e;
	e=d=a;
	b=(d>>20)|b;
	printf("%x\n",b);
	c=(e<<12)|c;
	c=c>>12;
	printf("%x",c);
	return 0;
}

