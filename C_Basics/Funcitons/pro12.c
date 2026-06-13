/*Write a function ,that can take two integers, swap their values and print their new values.
return type should be void. function should print the values.*/
#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value after swapping:a=%d,b=%d",a,b);
}
int main()
{
    int c,d;
    printf("enter two numbers:");
    scanf("%d%d",&c,&d);
    swap(c,d);
    return 0;
}
