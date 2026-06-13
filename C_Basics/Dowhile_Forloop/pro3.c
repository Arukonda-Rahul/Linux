#include<stdio.h>
int main()
{
    int n,m,b,i,s;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter 1st no:");
    scanf("%d",&m);
    b=m;
    s=m;
    for(i=1;i<=n-1;i++)
    {
        printf("enter no:\n");
        scanf("%d",&m);
        if(b<m)
        {
            b=m;
        }
        if(s>m)
        {
            s=m;
        }
    }
    printf("biggest is:%d\n",b);
    printf("smallest is:%d",s);
}
