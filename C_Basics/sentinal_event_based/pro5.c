#include<stdio.h>
int main()
{
        int a,b,sum=0;
        printf("enter a number:\n");
        scanf("%d",&a);
        if(a==0)
        {
            sum==0;
        }
        else if(a>0||a<0)
        {
            while(a!=0)
            {
                b=a%10;
                sum+=b;
                a/=10;
            }
        }
        else
        {
            printf("enter a valid number\n");
        }
        printf("the sum of digits are:%d",sum);
        return 0;
        
}
