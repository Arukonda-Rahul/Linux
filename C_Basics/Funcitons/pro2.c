/*Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n*/

#include<stdio.h>
int power(int a,int n)
{
    int res=1,i=1;
    while(i<=n)
    {
        res*=a;
        i++;
    }
    return res;
}

int main()
{
    int n1,p,r;
    printf("enter n1 and p:");
    scanf("%d%d",&n1,&p);
    r=power(n1,p);
    printf("%d",r);
    return 0;
    
}
