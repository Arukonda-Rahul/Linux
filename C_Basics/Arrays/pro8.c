/*8 Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};

*/


#include<stdio.h>
int main()
{
    int temp,i,j,n;
    printf("enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements into array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    
}
