#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter 3 numbers into a,b, and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(e=(a<b)?(a<c?a:c):(a<d?a:d))
    {
        printf("%d is smaller",e);
    }
    else if(f=(b<c)?(b<d?b:d):c)
    {
        printf("%d is smaller",f);
    }
    else
    {
        printf("%d is bigger",g);
    }
    return 0;
}
