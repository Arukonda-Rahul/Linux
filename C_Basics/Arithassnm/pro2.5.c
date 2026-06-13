#include<stdio.h>
int main()
{
	int a;
	printf("enter any 4-digit number");
	scanf("%d",&a);
	int b=a%10;
	a=a/10;
	int c=a%10;
	a=a/10;
	int d=a%10;
	int e=a/10;
	int p=1;
	p=b;
	p=(p*10)+c;
	p=(p*10)+d;
	p=(p*10)+e;
	//printf("%d%d%d%d",b,c,d,e);
	printf("%d",p);

	return 0;
}
