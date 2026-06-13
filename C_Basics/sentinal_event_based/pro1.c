#include<stdio.h>
int main()
{
    int a=0,dep=0,wd=0,c1=0,c2=0;
    while(1)
    {
        printf("enter amount:\n");
        scanf("%d",&a);
        if(a>0)
        {
            dep+=a;
            c1++;
        }
        else if(a<0)
        {
            wd+=-a;
            c2++;
        }
        else
        {
            break;
        }
    }
    printf("total amount deposited:%d\n",dep);
    printf("total amount withdrawn:%d\n",wd);
    return 0;
    

}

