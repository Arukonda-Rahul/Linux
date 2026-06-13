#include<stdio.h>
int main()
{
    int n,i,a=0,dep=0,wd=0;
    printf("enter no of customers:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("enter amount:\n");
        scanf("%d",&a);
        if(a>0)
        {
            dep+=a;
        }
        else if(a<0)
        {
            wd+=-a;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("total amount deposited:%d\n",dep);
    printf("total amount withdrawn:%d\n",wd);
    return 0;
    

}

