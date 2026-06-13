/*write a testbit() funciton.this function requires two 16 bit integer paramenets.
The first parameter is a 16 bit value to test.the second parameter is a value in
the range 0...15 describing hich bit to test.
The function should return true if bit position contains 1 and false if contains 0.
the function should always return false if the second parameter holds a value outside the range 0-15
*/
#include<stdio.h>
int testbit(int n,int p);
int main()
{
	short int n,p,r;
	printf("enter number:\n");
	scanf("%hd",&n);
	printf("enter bit:\n");
	scanf("%hd",&p);
	r=testbit(n,p);
	if(r)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	return 0;
}
int testbit(int n,int p)
{
	if(p>=0&&p<=15)
	{
		n=n&(0x1<<p);
		while(n)
		{
			return 1;
		}
	}
	return 0;
}
