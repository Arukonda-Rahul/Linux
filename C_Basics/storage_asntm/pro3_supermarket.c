/*
3) WAP - for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing
 check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … 
this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit.
*/







#include<stdio.h>
int stock;
int space=666;
void stocks();
void sell();
void purchase();
int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice\n1)Checkstock\n2)sales\n3)purchase\n4)quit\n");
		scanf("%d",&choice);
		if(choice==4)
		{
			break;
		}
		else
		{
			if(choice==1)
			{
				stocks();
			}		
			else if(choice==2)
			{
				sell();
			}
			else if(choice==3)
			{
				purchase();
			}
			else
			{
				printf("Enter a valid choice\n");
			}
		}
	}
	return 0;
}
