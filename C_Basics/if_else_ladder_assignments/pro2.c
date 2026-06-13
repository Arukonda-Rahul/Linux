#include <stdio.h>

int main()
{
    int a,b,c,d,res;
    printf("enter 4 numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    res=a;
    if(res<b)
    {
        res=b;
        printf("%d is greater",res);
    }
    else if(res<c)
    {
        res=c;
        printf("%d is greater",res);
    }
    else if(res<d)
    {
        res=d;
        printf("%d is greater",res);
    }
    return 0;
}

