#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers into a and b:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is biggest",a);
	}
	else
	{
		printf("%d is biggest",b);
	}
	return 0;
}
