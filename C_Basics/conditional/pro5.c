#include<stdio.h>
int main()
{
	char a;
	printf("enter the value of a");
	scanf("%c",&a);
	if(a>='a')
	{
		if(a<='z')
		{
			printf("%c is an alphabet",a);
		}
	}
	if(a>='A')
	{
		if(a<='Z')
		{
			printf("%c is an alphabet",a);
		}
	}
	else
	{
		printf("%c is not an alphabet",a);
	}
	return 0;
}
	
