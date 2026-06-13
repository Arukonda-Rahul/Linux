#include <stdio.h>
int main()
{
    int amount,amount1,amount2,amount3,amount4,amount5;
    printf("enter amount:");
    scanf("%d",&amount);
    if(amount%50==0)
    {
        amount1=amount/2000;
        amount=amount%2000;
        amount2=amount/1000;
        amount=amount%1000;
        amount3=amount/500;
        amount=amount%500;
        amount4=amount/200;
        amount=amount%200;
        amount5=amount/50;
        printf("no of 2000 notes:%d\n",amount1);
        printf("no of 1000 notes:%d\n",amount2);
        printf("no of 500 notes:%d\n",amount3);
        printf("no of 200 notes:%d\n",amount4);
        printf("no of 50 notes:%d\n",amount5);
    }
    else
    {
        printf("enter amount in denominations of 50");
    }
    
    return 0;
}

