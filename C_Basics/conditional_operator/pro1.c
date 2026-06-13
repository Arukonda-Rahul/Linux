#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a>b?a:b;
    printf("%d is bigger",c);
    return 0;
}
