#include<stdio.h>
int main()
{
    int n,i,r,rev=0;
    printf("enter no:");
    scanf("%d",&n);
    
    for(int i=1;n>0;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d",rev);
}
