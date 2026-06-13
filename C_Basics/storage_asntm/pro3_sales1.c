#include<stdio.h>
extern int stock;
int quantity;
void sell()
{
	printf("Enter Amount Of Stock You Want To Buy\n");
	scanf("%d",&quantity);
	if(quantity<=stock)
	{
		printf("Thankyou for Buying Stock Of %d\n",quantity);
		stock=stock-quantity;
	}
	else
	{
		printf("Stock Not Available\n");
	}
}

