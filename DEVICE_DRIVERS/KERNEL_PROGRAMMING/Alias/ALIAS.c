#include<stdio.h>

static int myfunc(int a,int b)
{
	printf("%d",a+b);
	return a+b;
}


static int add(int a,int b)__attribute__((alias("myfunc")));


int main()
{
	add(2,3);
	return 0;
}
