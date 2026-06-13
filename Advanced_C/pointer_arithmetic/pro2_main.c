/*
2) Write two source files, main.c and swap.c. 
The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
*/

#include<stdio.h>
void swap(int *arr);
int main()
{
	int arr[2]={1,2};
	printf("before swapping:\n");
	for(int i=0;i<2;i++)
	{
		printf("%d\n",arr[i]);
	}
	swap(arr);
	printf("after swapping\n");
	for(int i=0;i<2;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
