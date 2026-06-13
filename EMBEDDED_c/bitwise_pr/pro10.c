/*
10. WAP whether a number is ODD or EVEN using bitwise.
*/


#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:\n");
	scanf("%d",&a);
	if(a&0x1)
	{
		printf("odd");
	}
	else
	{
		printf("even");	
	}
	return 0;
}
