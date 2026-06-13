#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    
        printf("%d is bigger",d);
    
    return 0;
}
