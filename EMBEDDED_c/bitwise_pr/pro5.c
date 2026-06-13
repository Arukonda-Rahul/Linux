/*
5. WAP implement addition functionality with out using ADD('+') Operator
*/
#include<stdio.h>
int  main()
{
    int a,b;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter b:\n");
    scanf("%d",&b);
    int c=a-(~b)-1;
    printf("%d",c);
    return 0;
}

