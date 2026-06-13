#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d",&year);
	if(year%100!=0)
	{
		if(year%400!=0)
		{
			printf("%d is not leap year",year);
		}
		else
		{
			printf("%d is leap year",year);
		}		
	}
	if(year%100==0)
	{
		if(year%4==0)
		{
			printf("%d is leap year",year);
		}
		else
		{
			printf("%d is not leap year",year);
		}
	}
	return 0;
}
