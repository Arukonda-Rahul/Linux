/*
Search for an element in a two dimentional array, and print its position - as row and column numbers.
 write a search function that will receive the array and return row and column indexes as output. 
*/




#include<stdio.h>
int *a,*b;
int search_element(int arr[3][3],int se)
{
	int i,j;
	for(int i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==se)
			{
				*a=i;
				*b=j;
				return 1;
			}
		}
	}
	return 0;
}
int i1,i2;
int main()
{
	int arr[3][3],se,i,j;
	a=&i1,b=&i2;
	for(i=0;i<3;i++)
	{
	printf("enter elements into row:%d\n",i);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("enter search element:\n");
	scanf("%d",&se);
	int r=search_element(arr,se);
	if(r)
	{
		printf("search element found at index:%d-%d\n",i1,i2);
	}
	else
	{
		printf("search element not found\n");
	}
	return 0;	
}
			
