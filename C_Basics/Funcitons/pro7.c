/* write a function that can take an integer as input and return 1 if the number is prime number,
  return 0 if it is not prime and print appropriate output message in main according to output.
return type is integer. function name IsPrime - returns int (0 or 1)*/


#include <stdio.h>
int IsPrime(int n)
{
    int i,c=0;
    for (i=1;i<=n;i++) 
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
    int num,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    r=IsPrime(num);
    if(r==1)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}

