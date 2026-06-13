/*
6. WAP implement XOR functionality with out using XOR(^) operator.
*/
#include<stdio.h>
int  main()
{
    int a,b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    int c=(a&~b)|(~a&b);
    printf("%d",c);
    return 0;
}

