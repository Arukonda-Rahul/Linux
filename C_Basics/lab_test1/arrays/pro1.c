#include<stdio.h>
int main()
{
	int n,i,j,p=1;
	printf("enter size of an array:\n");
	scanf("%d",&n);
	int arr[n],prod[n];
	printf("enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		p=1;
		for(j=0;j<n;j++)
		{
			if(j==i)
			{
				continue;
			}
			else
			{
				p=p*arr[j];
			}
		}
		prod[i]=p;
	}
	printf("the input array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}		
	printf("\nthe product array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",prod[i]);
	}
	return 0;
}
