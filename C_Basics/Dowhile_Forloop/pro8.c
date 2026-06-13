#include<stdio.h>
int main()
{
    int n,c=0,i=1;
    printf("enter n:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    while(i<=n);
    {
        if(c==2)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }
    }
}
