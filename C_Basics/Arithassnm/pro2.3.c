#include<stdio.h>
int main()
{
	int a;
	printf("enter anyb 4-digit number");
	scanf("%d",&a);
	int b=a/1000;
	int c=a/100;
	int d=a/10;
	printf("%d\n%d\n%d\n%d\n",b,c,d,a);
	return 0;
}
