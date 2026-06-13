#include<stdio.h>
#include"super.h"
static int stock=100;
static int space=500;
int quantity;
static int  sales_count;
static int purchase_count;
static int items_sold;
static int items_purchased;
static int customers_visited;

void stocks()
{
	printf("AVAILABLE STOCK IS:%d\n",stock);
}
void del()
{
	int choice;
	printf("ENTER AMOUNT OF STOCK YOU WANT TO BUY\n");
	scanf("%d",&quantity);
	if(quantity<=stock)
	{
		printf("THANK YOU FOR PURCHASING THE STOCK\n");
		stock=stock-quantity;
		items_sold+=quantity;
		sales_count++;
		customers_visited++;
		
		
	}
	else
	{
		printf("1)SELL THE AVAILABLE STOCK\n2)CANCEL THE SALES\n");
		scanf("%d",&choice);
		if(choice==1)
		{
			if(stock==0)
			{
				printf("STOCK IS EMPTY\n");
				customers_visited++;
			}
			else 
			{	
				printf("THANKYOU FOR PURCHASING AVAILABLE STOCK %d\n",stock);
				items_sold+=stock;
				stock=stock-stock;
				sales_count++;
				customers_visited++;
			}
		}
		else 
		{
			customers_visited++;
	
		}
	}
}
void add()
{	
	int choice=0;
	int space_available=0;
	space_available=space-stock;
	printf("ENTER STOCK YOU WANT TO PURCHASE\n");
	scanf("%d",&quantity);
	if(quantity<=space_available)
	{
		stock+=quantity;
		printf("PURHCASE SUCESSFUL\n");
		purchase_count++;
		items_purchased+=quantity;
	}
	else 
	{
		printf("1)PURCHASE TO FILL THE STOCK\n2)CANCEL THE PURCHASE\n");
		scanf("%d",&choice);
	
		if (choice==1)
		{
			space_available=space-stock;
			if(space_available>0)
			{
				items_purchased+=space_available;
				stock+=space_available;
				items_purchased+=space_available;
				printf("YOU HAVE PURCHASED STOCK AND YOUR GODOWN IS FULL\n");
				purchase_count++;
				customers_visited++;
			}
		}
		else if(choice==2)
		{
			printf("GODOWN IS FULL\n");
		}
	}
}
void count()
{
	printf("1)CLOSING STOCK IS:%d\n2)NO OF SALES:%d\n3)NO OF ITEMS SOLD:%d\n4)NO OF PURCHASES:%d\n5)NO OF ITEMS PURCHASED:%d\n6)NO OF TOTAL CUSTOMERS VISITED:%d\n",stock,sales_count,items_sold,purchase_count,items_purchased,customers_visited);
}
