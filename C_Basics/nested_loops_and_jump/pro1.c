/* Write a program to print all prime numbers between 2 given numbers.  
Print how many prime numbers are found at the end*/

#include<stdio.h>
int main()
{
    int a,b,i,j,c1=0,c2=0;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    printf("prime nos between %d and %d are:\n",a,b);
    for(i=a;i<=b;i++)
    {
        c1=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c1++;
                
            }
        }
        if(c1==2)
        {
            printf("%d\n",i);
            c2++;
        }
    }
    
    printf("Total there are %d primes between %d and %d",c2,a,b);
}
