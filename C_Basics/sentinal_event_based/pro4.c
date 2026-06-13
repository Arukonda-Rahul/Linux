#include<stdio.h>
int main()
{
        int a,c=0;
        printf("enter a number:\n");
        scanf("%d",&a);
        if(a==0)
        {
            c++;
        }
        else if(a>0||a<0)
        {
            while(a!=0)
            {
                a/=10;
                c++;
            }
        }
        else
        {
            printf("enter a valid number\n");
        }
        printf("the no of digits are:%d",c);
        return 0;
        
}
