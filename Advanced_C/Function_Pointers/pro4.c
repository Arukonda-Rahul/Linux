/*
4)"Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character
 as arguments and invokes appropriate function based on the character. 
In main function, simply invoke this function by sending the array and operator character and operands as input.
eg.,
in main
case '+' :invokeptr( fparr, x,y, ch);


invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
//based on ch value, choose which index to apply on fptr and invoke the function
}
*/
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divd(int a,int b);
int mod(int a,int b);
int fun(int(*p[])(int,int),int a,int b,char ch);

int main()
{
	int a,b;
	char ch;
	int((*p[5])(int,int))={add,sub,mul,divd,mod};
	printf("enter value of a:\n");
	scanf("%d",&a);	
	printf("enter value of b:\n");
	scanf("%d",&b);
	printf("enter operator:\n");
	scanf(" %c",&ch);
	switch(ch)
	{
	    case '+':fun((p),a,b,ch);
	    break;
	    case '-':fun((p),a,b,ch);
	    break;
	    case '*':fun((p),a,b,ch);
	    break;
	    case '/':fun((p),a,b,ch);
	    break;
	    case '%':fun((p),a,b,ch);
	    break;
	    default:printf("enter a valid operator\n");
	}
	return 0;
}
int fun(int(*p[])(int,int),int a,int b,char ch)
{
	if(ch=='+')
	{	
    		printf("%d\n",p[0](a,b));
	}
	else if(ch=='-')
	{
		printf("%d\n",p[1](a,b));
	}
	else if(ch=='*')
	{
		printf("%d\n",p[2](a,b));
	}
	else if(ch=='/')
	{
		printf("%d\n",p[3](a,b));
	}
	else
	{
		printf("%d\n",p[4](a,b));
	}
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



