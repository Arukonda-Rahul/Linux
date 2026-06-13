/*
IP1: {1,2,3,4,5,6};
d=2;
OP:3 4 5 6 1 2
*/


#include<stdio.h>
void rotate(int ar[],int d,int n)
{
	int temp=0,i,j;
	for(i=0;i<d;i++)
	{
		temp=ar[0];
		for(j=0;j<n-1;j++)
		{
			ar[j]=ar[j+1];
		}
		ar[n-1]=temp;
	}
}
int main()
{
	int n,d,i;
	printf("enter size of array:\n");
	scanf("%d",&n);
	int ar[n];
	printf("enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("enter size of 'd' to rotate:\n");
	scanf("%d",&d);
	rotate(ar,d,n);
	printf("array after rotation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",ar[i]);
	}
	return 0;
}
