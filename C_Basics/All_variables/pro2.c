#include<stdio.h>
int main()
{
	int a;
	unsigned a1;
	short int b;
	unsigned short int b1;
	long int c;
	unsigned long int c1;
	char d;
	unsigned char d1;
	float f;
	double g;
	long double g1;
	printf("enter numbers into variables:");
	scanf("%d%u%hd%hu%ld%lu%c%c%f%lf%Lf",&a,&a1,&b,&b1,&c,&c1,&d,&d1,&f,&g,&g1);
	printf("the int num a:%d\nThe unsgined int a1:%u\nThe short int b:%hd\nThe unsigned short intb1:%hu\nThe long int c:%ld\nThe unsigned long int c1:%lu\nThe signed char d:%c\nThe unsigned char d1:	  %c\nThe float f:%f\nThe double g:%lf\nThe long double g1:%Lf",a,a1,b,b1,c,c1,d,d1,f,g,g1);
	return 0;
} 
