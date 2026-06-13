/*Write a function that takes two numbers a and b, and returns the remainder after dividing a with b*/


#include<stdio.h>
int divide(int a,int b)
{
    int r=0;
    r=a%b;
    return r;
}

int main()
{
    int n1,n2,p;
    printf("enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    p=divide(n1,n2);
    printf("%d",p);
    return 0;
    
}
