#include<stdio.h>
int main()
{
    int  a,b,q,r;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    q=0;
    while(1)
    {
        if(a>=b)
        {
            a=a-b;
            q++;
        }
        else if(a<b)
        {
            r=a;
            break;
        }
    }
    printf("%d\n",q);
    printf("%d\n",r);
    return 0;
}

