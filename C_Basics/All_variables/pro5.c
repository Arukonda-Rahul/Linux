#include<stdio.h>
int main()
{
	float area,perimeter,length,breadth;
	printf("enter length and breadth");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	perimeter=2*length*breadth;
	printf("the area is:%f\nThe perimeter is:%f\n",area,perimeter);
	return 0;
}
