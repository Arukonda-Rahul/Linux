#include<stdio.h>
int main()
{
	int a;
	printf("enter any 4digit number");
	scanf("%d",&a);
	int b=a/1000;
	a=a%1000;
	int c=a/100;
	a=a%100;
	int d=a/10;
	a=a%10;
	int e=a;
	printf("%d\n%d\n%d\n%d\n",b,c,d,e);
	return 0;
}
	
