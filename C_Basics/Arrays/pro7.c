/*7 Write a program to print an array in reverse order.*/

#include<stdio.h>
int main()
{
    int temp,i,n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    
}
