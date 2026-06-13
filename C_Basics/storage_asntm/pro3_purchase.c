#include<stdio.h>
extern int stock;
extern int space;
int available_stock;
int p;
void purchase()
{
	printf("enter amount of stock\n");
	scanf("%d",&p);
	available_stock=space-stock;
	if(p<=available_stock)
	{
		printf("Purchase Sucess\n");
		stock=stock+p;
	}
	else
	{
		printf("Godown Space Not Sufficient\n");
	}
}
	
