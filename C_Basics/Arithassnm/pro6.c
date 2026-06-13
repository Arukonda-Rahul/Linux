#include<stdio.h>
int main()
{
	int x=2,y=3,z=4;
	x=x+y+z;
	z=x-y-z;
	y=x-y-z;
	x=x-y-z;
	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
}
