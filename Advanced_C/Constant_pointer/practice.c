#include<stdio.h>
int main()
{
	int x=10,y=5;
	int *const ptr=&x;//constant pointer
	*ptr=12;
	y=*ptr;
	printf("x:%d y:%d *ptr:%d\n",x,y,*ptr);
	return 0;
}
