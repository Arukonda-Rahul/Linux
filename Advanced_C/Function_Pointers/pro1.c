/*
1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.
*/


#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

int main()
{
	int a,b;
	char ch;
	printf("enter value of a:\n");
	scanf("%d",&a);	
	printf("enter value of b:\n");
	scanf("%d",&b);
	int (*p)(int,int);
	p=add;
	printf("addtion of %d and %d is:%d\n",a,b,p(a,b));
	p=sub;
	printf("subtraction of %d and %d is:%d\n",a,b,p(a,b));
	p=mul;
	printf("multiplication of %d and %d is:%d\n",a,b,p(a,b));
	p=div;
	printf("division of %d and %d is:%d\n",a,b,p(a,b));
	p=mod;
	printf("remainder of %d and %d is:%d\n",a,b,p(a,b));
	return 0;
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
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
	
	
	
		
