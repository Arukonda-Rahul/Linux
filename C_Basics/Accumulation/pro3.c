#include<stdio.h>
int main()
{
    int i,j,k,n,sum=0,es=0,os=0;
    printf("enter range:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum+=i;
        if(i%2==0)
        {
            es+=i;
        }
        else
        {
            os+=i;
        }
        i++;
    
    }
    printf("total sum:%d\n",sum);
    printf("total even sum:%d\n",es);
    printf("total odd sum:%d\n",os);
    return 0;
}
