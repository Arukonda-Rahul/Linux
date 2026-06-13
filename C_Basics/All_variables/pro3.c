#include<stdio.h>
int main()
{
	int p,n;
	float r;
	float si=0;
	float m=0;
	printf("enter principle,time in months and rate of intrest");
	scanf("%d%d%f",&p,&n,&r);
	m=n/12.0;
	si=p*m*r/100;
	printf("the simple intresr is:%f",si);
	return 0;
}
