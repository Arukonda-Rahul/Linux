#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("prime\n");
    }
    else
    {
        printf("not prime\n");
    }

}
