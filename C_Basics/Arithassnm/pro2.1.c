#include<stdio.h>
int main()
{
	int a;
	printf("enter 4-digit value into a:");
	scanf("%d",&a);
	int b=a%10;
	a=a/10;
	int c=a%10;
	a=a/10;
	int d=a%10;
	int e=a/10;
	printf("%d\n%d\n%d\n%d\n",b,c,d,e);
	return 0;
}
	
	
	
	
