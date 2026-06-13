#include<stdio.h>
int main()
{
	int a;
	printf("enter any 4 digit number");
	scanf("%d",&a);
	int b=a/10;
	int c=a/100;
	int d=a/1000;
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
	return 0;
}
