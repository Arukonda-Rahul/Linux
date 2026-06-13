/*Write a factorial function that takes a number as input and returns its factorial as output.*/

#include<stdio.h>
int Factorial(int a)
{
    int i=1,fact=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
    int a,r;
    printf("Enter no:");
    scanf("%d",&a);
    r=Factorial(a);
    printf("%d",r);
    return 0;
}

