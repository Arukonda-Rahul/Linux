#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int c=a>b;
    switch(c)
    {
        case 0:printf("%d is bigger",b);
        break;
        case 1:printf("%d is bigger",a);
        break;
        default:printf("enter valid numbers");
        break;
    }
    return 0;
}
