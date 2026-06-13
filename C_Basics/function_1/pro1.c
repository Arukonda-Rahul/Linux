/*Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the 
prime number function written previously. 
PrintAllPrimes - return type is void. Should use IsPrime() from yesterdays assignments that returns int.*/


#include<stdio.h>

int IsPrime(int a)
{
    int i, c = 0;
    for(i = 1; i <= a; i++)
    {
        if(a % i == 0)
        {
            c++;
        }
    }
    if(c == 2)
    {
        return 1;
    }
    return 0;
}

void PrintAllPrimes(int c, int d)
{
    int i;
    for(i = c; i <= d; i++)
    {
        if(IsPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    PrintAllPrimes(a, b);
    return 0;
}

