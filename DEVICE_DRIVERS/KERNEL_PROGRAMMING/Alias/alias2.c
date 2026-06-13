#include<stdio.h>

void func(int a,int b)
{
	printf("%d\n",a+b);
}

void add(int a,int b)__attribute__((alias("func")));


int main()
{
	add(2,3);
	func(3,3);
	return 0;
}
