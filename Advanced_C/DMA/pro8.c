/*
8)  Write a function that takes two sorted integer arrays as input,
 and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. 
Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20
*/

#include<stdio.h>
#include<stdlib.h>
void sort(int *arr1,int *arr2,int *arr,int l1,int l2)
{
	static int i,j,k,h,a,temp=0;
	for(i=0;i<l1;i++)
	{
		arr[i]=arr1[i];	
	}
	l2=l2+i;
	for(i=i,j=0;i<=l2,j<l2;i++,j++)
	{
		arr[i]=arr2[j];
	}
	for(k=0;k<l2;k++)
	{
	    for(j=0;j<l2-1;j++)
	    {
	        if(arr[j]>arr[j+1])
	        {
	            temp=arr[j];
	           arr[j]=arr[j+1];
	           arr[j+1]=temp;
	        }
	    }
	}
	for(j=0;j<l2;j++)
	{
		for(h=j+1;h<l2;h++)
		{
			if(arr[j]==arr[h])
			{
				for(a=h;a<=l2;a++)
				{
					arr[a]=arr[a+1];
				}
				l2--;
				j--;
			}
		}
	}
	for(j=0;j<l2;j++)
	{
		printf("%d\t",arr[j]);	
	}
}
int main()
{
	int *p1;
	int *p2;
	int *p;
	int n,m,i,j;
	printf("enter size of array1:\n");
	scanf("%d",&n);
	printf("enter size of array2:\n");
	scanf("%d",&m);
	j=m+n;
	p1=(int*)malloc(n*sizeof(int));
	p2=(int*)malloc(m*sizeof(int));
	p=(int*)malloc(j*sizeof(int));
	if(p==NULL&&p1==NULL&&p2==NULL)
	{
		printf("memory alocation failed\n");
		return 0;
	}
	else
	{
		printf("enter %d elements into array1:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&p1[i]);
		}
		printf("enter %d elements into array2:\n",m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&p2[i]);
		}	
		sort(p1,p2,p,n,m);
		free(p);
		free(p1);
		free(p2);
	}
	return 0;
}
	
