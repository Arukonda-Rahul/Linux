#include<stdio.h>
int main()
{
    int i,n;
    float con=1.0,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=1-(con/i);
        }
        else
        {
            sum+=(con/i);
        }
        i++;
    }
    printf("res is:%f",sum);
    return 0;
    
}

