/*
3)"Write the calculator program using a function that accepts a function pointer and
 the operand values as arguments and invokes it.
 In the main function, simply invoke this function by sending the appropriate function address, based on the operator chosen.
eg.,
in main
case '+' :invokeptr(add , x,y);
invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf(""%d\n"",fptr(x,y));
}"
*/


#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divd(int a,int b);
int mod(int a,int b);
int fun(int(*q)(int,int),int a,int b);

int main()
{
	int a,b;
	char ch;
	int(*q)(int,int);
	printf("enter value of a:\n");
	scanf("%d",&a);	
	printf("enter value of b:\n");
	scanf("%d",&b);
	printf("enter operator:\n");
	scanf(" %c",&ch);
	switch(ch)
	{
	    case '+':fun(add,a,b);
	    break;
	    case '-':fun(sub,a,b);
	    break;
	    case '*':fun(mul,a,b);
	    break;
	    case '/':fun(divd,a,b);
	    break;
	    case '%':fun(mod,a,b);
	    break;
	    default:printf("enter a valid operator\n");
	    break;
	}
	return 0;
}

int fun(int(*q)(int,int),int a,int b)
{
    printf("%d\n",q(a,b));
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int divd(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}

