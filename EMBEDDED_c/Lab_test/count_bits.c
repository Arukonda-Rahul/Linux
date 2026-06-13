/*write a count_bits() function.this function should return no of ones in a given integer
*/
#include<stdio.h>
int count_bits(int a)
{
	int c=0;
	while(a>0)
	{
		c++;
		a=a&(a-1);
	}
	return c;
}
int main()
{
	int a,r;
	printf("enter number:\n");
	scanf("%d",&a);
	r=count_bits(a);
	printf("no of bits:%d",r);
	return 0;

}
