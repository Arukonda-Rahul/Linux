/*Write a factorial function that calculates factorial without using * operator.*/

#include<stdio.h>
int sum(int c,int i)
{
    int y,j;
    for(y=0,j=0;j<i;j++)
    {
        y=y+c;
    }
    return y;
}
int fact(int a)
{
    int i,c=1;
    for(i=1;i<=a;i++)
    {
        c=sum(c,i);
    }
    return c;
}
int main()
{
    int n,c;
    printf("enter a number:");
    scanf("%d",&n);
    c=fact(n);
    printf("%d",c);
    return 0;
}
