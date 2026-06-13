/*
10 Write a program to swap two arrays in reverse order.
eg.,
input : array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};
output:
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
*/
#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int a1[n],a2[n];
    printf("enter elemetns into array1:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter elemetns into array2:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        temp=a1[i];
        a1[i]=a2[j];
        a2[j]=temp;
    }
    printf(" array1:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a1[i]);
    }
    printf("array2:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a2[i]);
    }
    
}
