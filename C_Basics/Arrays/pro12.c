/*12 Write a function to modify the array such that all negative numbers are converted to positive.*/
int negative(int a)
{
        if(a>=0)
        {
            return a;
        }
        else
        {
            return -a;
        }
}

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter nos:\n");
    int neg[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        neg[i]=negative(arr[i]);
        
    }
    printf("the new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",neg[i]);
    }
    
    
}
