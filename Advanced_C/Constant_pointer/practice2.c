#include<stdio.h>
int main()
{
	int x;
	int const *ptr;//pointer to a constant
	x=15;
	ptr=&x;
//	*ptr=10;
	printf("x=%d *ptr=%d \n",x,*ptr);
	return 0;
}
