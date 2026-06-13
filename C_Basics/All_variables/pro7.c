#include<stdio.h>
int main()
{
	float pi=3.14;
	float A,P,r;
	printf("enter radius of circle");
	scanf("%f",&r);
	A=2*pi*r*r;
	P=2*pi*r;
	printf("the area is:%f\nThe perimeter is:%f",A,P);
	return 0;
}
