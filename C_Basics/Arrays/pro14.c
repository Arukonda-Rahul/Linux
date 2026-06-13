/* 14) write a function to take an array as input, and count how many times the biggest number
is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
output : biggest number is repeated 4 times*/
#include<stdio.h>
int count(int a[],int s)
{
    int i=0;
    int max=a[i],c=0;
    for(i=1;i<s-1;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<s;i++)
    {
        if(max==a[i])
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int i,s;
    printf("enter size of array1:\n");
    scanf("%d",&s);
    int a[s];
    printf("enter elements into array:\n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    int res=count(a,s);
    printf("the biggest no reapeated:%d times",res);
    
}
