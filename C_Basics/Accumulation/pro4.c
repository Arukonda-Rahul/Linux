#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("enter n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("fact:%d",fact);
    return 0;
}
