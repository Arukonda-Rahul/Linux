#include<stdio.h>
int main()
{
    int n,c=0;
    printf("enter n:");
    scanf("%d",&n);
    do
    {
        n=n/10;
        c++;
    }
    while(n>0);
    {
        printf("%d",c);
    }
}
