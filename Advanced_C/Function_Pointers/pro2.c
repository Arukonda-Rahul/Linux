/*
2)Rewrite the calculator program using an array of function pointers.
*/
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divd(int a,int b);
int mod(int a,int b);


int main()
{
	int a,b,x,c;
	printf("enter value of a:\n");
	scanf("%d",&a);	
	printf("enter value of b:\n");
	scanf("%d",&b);
	int (*p[5])(int,int)={add,sub,mul,divd,mod};
	p[0]=add;
	p[1]=sub;
	p[2]=mul;
	p[3]=divd;
	p[4]=mod;
	printf("enter 1.addition\n2.subtraction\n3.multiplication\n4.Division\n5.mod_division\n");
	scanf("%d",&x);
	x=x-1;
	c=(*p[x])(a,b);
	printf("the result is:%d",c);
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
int divd(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}


