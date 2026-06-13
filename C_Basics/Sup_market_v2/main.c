/* 						***Super Market version2***
1) Stock variable should be limited to stock.c file, it should not be directly accessible outside. 

2) change sales option such that, when the customer wants to buy more items than the available stock, then the program gives the below 2 options
    1) Sell the available stock (sell whatever available, stock becomes 0)
    2) cancel the sales (stock remains as it is)

3) Change purchase option such that, when the supervisor wants to purchase more stock than the available space, then the program gives the below 2 options
    1) Purchase to fill the space( stock becomes full to the capacity)
    2) cancel the purchase (stock remains as it is)

4) When user chooses 4 - Quit option, 
Print the below report before stopping the program:
1) closing stock
2) No of sales
3) No of items sold
4) No of purchases
5) No of items purchased
6) No of total customers visited   */



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
#include"super.h"
int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice\n1)Checkstock\n2)sales\n3)purchase\n4)quit\n");
		scanf("%d",&choice);
		if(choice==4)
		{
			count();
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

