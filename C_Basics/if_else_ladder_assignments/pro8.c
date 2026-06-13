#include<stdio.h>
int main()
{
	int a,b,res;
	char ch;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("enter opearand:");
	scanf(" %c",&ch);
	if(ch=='+')
	{
		res=a+b;
	}
	else if(ch=='-')
	{
		res=a-b;
	}
	else if(ch=='*')
	{
		res=a*b;
	}
	else if(ch=='/')
	{
		res=a/b;
	}
	else
	{
		printf("enter a valid operand");
	}
	printf("res is:%d",res);
	return 0;
}
	
