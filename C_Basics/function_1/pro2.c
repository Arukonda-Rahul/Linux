/*Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n without using * operator.
 Write all three functions in three different source code file */

#include<stdio.h>

int sum(int a,int y)
{
    int x=0;
    for(int j=1;j<=a;j++)
    {
        x+=y;
    }
    return x;
}
int prime(int a,int b)
{
    int x,y,i,j;
    for(i=1,y=a;i<b;i++)
    {
        y=sum(a,y);
    }
    return y;
}

int main()
{
    int a,b,n;
    printf("Enter two values :");
    scanf("%d%d",&a,&b);
    n=prime(a,b);
    printf("Result=%d\n",n);
}

