/*Write a function that takes two numbers a and b as input arguments and 
returns their product as return value , without using * operator.*/



#include<stdio.h>
int multiply(int a,int b)
{
    int i=1,mul=0;
    while(i<=a)
    {
        mul+=b;
        i++;
    }
    return mul;
}

int main()
{
    int n1,n2,p;
    printf("enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    p=multiply(n1,n2);
    printf("%d",p);
    return 0;
    
}
