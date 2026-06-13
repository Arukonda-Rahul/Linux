#include<stdio.h>
int main()
{
	int amount,amount1,amount2,amount3,amount4,amount5;
	printf("enter amount:");
	scanf("%d",&amount);
	amount1=amount/2000;
	amount=amount%2000;
	amount2=amount/500;
	amount=amount%500;
	amount3=amount/200;
	amount=amount%200;
	amount4=amount/100;
	amount=amount%100;
	amount=amount/50;
	printf("No of 2000 notes:%d\n",amount1);
	printf("No of 1000 notes:%d\n",amount2);
	printf("No of 500 notes:%d\n",amount3);
	printf("No of 100 notes:%d\n",amount4);
	printf("No of 50 notes:%d\n",amount);
	return 0;
}

