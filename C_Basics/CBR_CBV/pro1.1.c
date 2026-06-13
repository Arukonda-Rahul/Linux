/*
1.1)Write a program to swap two numbers using  Call by Reference.
*/
#include<stdio.h>
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("After swap in function:\n");
    printf("a=%d,b=%d\n",*a,*b);
    
}
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("before swap:\n");
    printf("a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap in main:\n");
    printf("a=%d,b=%d\n",a,b);
}
