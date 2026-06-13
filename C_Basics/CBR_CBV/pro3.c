/*
3)Write a function that can rotate the values of three variables. print the results in main function.
*/
#include<stdio.h>
void rotate(int *a,int *b,int *c)
{
    int temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
    
}
int main()
{
    int a,b,c;
    printf("enter two numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("before rotate in main:\n");
    printf("a=%d,b=%d,c-%d\n",a,b,c);
    rotate(&a,&b,&c);
    printf("after rotate in main:\n");
    printf("a=%d,b=%d,c=%d\n",a,b,c);
}
