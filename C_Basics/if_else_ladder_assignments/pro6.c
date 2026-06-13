#include<stdio.h>
int main()
{
	char a;
	printf("enter any character:");
	scanf("%c",&a);
	if(a>='a')
	{
		if(a<='z')
		{
			printf("%c",a-32);
		}
		else
		{
			printf("%c is not an alphabet",a);
		}
	}
	if(a>='A')
	{
		if(a<='Z')
		{
			printf("%c",a+32);
		}
		else
		{
			printf("%c is not an aplhabet",a);
		}
	}
	else
	{
		printf("%c is is not an alphabet",a);
	}
	return 0;
}
