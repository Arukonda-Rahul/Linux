/*
Input:{1,2,0,4,5,0,8,6}
OP:1 2 4 5 8 6 0 0 
Input :{1,2,4,0,0,5}
OP:1 2 4 5 0 0
*/
#include<stdio.h>
int main()
{
	int n,i,j,temp=0,s;
	printf("enter size of array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
s=n-1;
	for(i=0;i<s;i++)
	{
		if(arr[i]==0)
		{
			temp=arr[i];
			for(j=i;j<s;j++)
			{
				arr[j]=arr[j+1];			
			}
			i--;
			s--;
			arr[j]=temp;

		}
	}
	printf("after pushing zeroes array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}	
	return 0;
}

