/*Write a program to calculate the sum of the below series upto n terms:

1 - 1/2! + 1 / 3! - 1/4! + 1/5! - 1/6! ..... 1/n!    */

#include <stdio.h>

float Series(int n)
{
    float con = 1.0, es = 0, os = 0, res = 0, fact;
    int i, j;
    
    for (i = 1; i <= n; i++)
    {
        fact = 1.0;
        
        for (j = 1; j <= i; j++)
        {
            fact = fact * j; 
        }
        
        if(i%2==0)
        {
            es+=(con/fact);
        }
        else
        {
            os+=(con/fact);
        }
    }
    res=-es+os;
    
    return res;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    float result = Series(n);
    
    printf("Result: %f\n", result);
    
    return 0;
}

