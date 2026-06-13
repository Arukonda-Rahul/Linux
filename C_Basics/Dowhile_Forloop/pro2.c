#include<stdio.h>
int main()
{
    int n,i,b,m,c=0;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter first no:");
    scanf("%d",&m);
    b=m;
    if(b>0)
    {
        c++;
    }
    for(i=1;i<=n-1;i++)
    {
        if(b<0)
        {
            break;
        }
        else
        {
            printf("enter no:\n");
            scanf("%d",&m);
            if(m<0)
            {
                break;
            }
            else if(b<m)
            {
                c++;
                b=m;
            }
            else if(b>m)
            {
                printf("wrong input ,please enter a number bigger than %d\n",b);
            }
        }
    }
    printf("count:%d",c);
    
}
