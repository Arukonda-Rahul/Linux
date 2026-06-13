/*
Declare a two-dimensional array of elements for sales details of a store, for each item, for each sales man.
Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales
*/

#include<stdio.h>
int  main()
{	
	int i,j,r,c,sum=0,item;
	printf("enter number of sales man and no of items:\n");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(int i=0;i<r;i++)
	{
	printf("enter salesman%d items:\n",i+1);
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
	}
	printf("The sales details in matrxi form is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum+=arr[i][j];
		}
		printf("Total sales by sales man%d is:%d\n ",i+1,sum);
	}
	printf("enter item no for which you want to calculate total sales:\n");
	scanf("%d",&item);
	j=item=1;
	sum=0;
	for(i=0;i<r;i++)
	{
		sum+=arr[i][j];
	}
	printf("Total sales for item%d is:%d\n",item+1,sum);
	printf("total sales is:");
	sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=arr[i][j];
		}
	}
	printf("%d",sum);
}

	
