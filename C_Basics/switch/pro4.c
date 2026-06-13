#include<stdio.h>
int main()
{
    char ch;
    printf("enter operator:");
    scanf("%c",&ch);
    int a,b;
    printf("enter two values:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case '+':printf("result is:%d",a+b);
        break;
        case '-':printf("result is:%d",a-b);
        break;
        case '*':printf("result is:%d",a*b);
        break;
        case '/':printf("result is:%d",a/b);
        break;
        case '%':printf("result is:%d",a%b);
        break;
        default:printf("enter valid operator");
        break;
    }   
}
