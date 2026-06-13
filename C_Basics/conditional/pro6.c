#include<stdio.h>
int main()
{
	int a;
	printf("enter any number:");
	scanf("%d",&a);
	if(a>0)
	{	
		printf("%d",a);
	}
	else
	{
		a=-a;
		printf("%d",a);
	}
	return 0;
}

