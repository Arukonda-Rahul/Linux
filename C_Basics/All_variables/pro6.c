#include<stdio.h>
int main()
{
	float side,a,p;
	printf("enter side length");
	scanf("%f",&side);
	a=side*side;
	p=4*side;
	printf("the area is:%f\nThe perimeter is:%f\n",a,p);
	return 0;
}
