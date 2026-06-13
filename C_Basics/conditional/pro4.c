#include<stdio.h>
int main()
{
	int cost=250;
	int no_of_calls;
	printf("enter no of calls:");
	scanf("%d",&no_of_calls);
	if(no_of_calls<=100)
	{
		printf("bill:%d",cost);
	}
	else
	{
		int extra_calls=100-no_of_calls;
		float extra_calls_cost=extra_calls*1.25;
		float total_cost=cost+extra_calls_cost;
		printf("bill:%f",total_cost);
	}
	return 0;
}
