#include<stdio.h>
int main()
{
    float extrau,newuc;
    int n;
    float bill=100.0;
    printf("enter nou:");
    scanf("%d",&n);
    switch(n)
    {
        case 0 ... 200:
        printf("%f",bill);
        break;
        case 201 ... 400:
        extrau=n-200;
        newuc=extrau*0.65;
        bill=newuc+100.0;
        printf("%f",bill);
        break;
        case 401 ... 600:
        extrau=n-400;
        newuc=extrau*0.80;
        bill=newuc+230.0;
        printf("%f",bill);
        default:
        extrau=n-600;
        newuc=extrau*1.00;
        bill=newuc+390.0;
        printf("%f",bill);
        break;
    }
        
    return 0;
}


