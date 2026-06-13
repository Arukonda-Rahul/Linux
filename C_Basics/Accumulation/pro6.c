#include<stdio.h>
int main()
{
    int i,a,b,mul=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    i=1;
    while(i<=a)
    {
        mul+=b;
        i++;
    }
    printf("result is:%d",mul);
    return 0;
    
}
