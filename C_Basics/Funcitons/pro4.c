/*Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.*/

#include<stdio.h>
int divide(int a,int b)
{
    int q=0;
    q=a/b;
    return q;
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
