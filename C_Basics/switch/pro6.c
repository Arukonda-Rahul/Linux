#include<stdio.h>
int main()
{
    int a;
    printf("enter value of a:");
    scanf("%d",&a);
    int b=a%2;
    switch(b)
    {
        case 0:printf("even");
        break;
        case 1:printf("odd");
        break;
        default:printf("enter a valid number");
        break;
    }
    return 0;
}
