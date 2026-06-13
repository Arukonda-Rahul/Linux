/*
6 Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to
 search as inputs, and returns the index as output. If element not found, return -1.
*/

#include<stdio.h>
int find(int a[50],int n,int s)
{
    int ei;
    for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            ei=i;
	    break;
        }
        else
        {
            ei=-1;
        }
    }
    return ei;
}
int main()
{
    int n,i,s;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements into array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter search element:\n");
    scanf("%d",&s);
    int index=find(a,n,s);
    printf("element index is:%d\n",index);
}

