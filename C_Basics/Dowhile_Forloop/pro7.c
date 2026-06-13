#include<stdio.h>
int main()
{
    int a,b,i;
    char ch,ch1='n';
    do
    {   
        printf("enter operator:");
        scanf(" %c",&ch);
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
        {
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            if(ch=='+')
            {
                printf("result is:%d+%d=%d\n",a,b,a+b);
            }
            else if(ch=='-')
            {
                printf("result is:%d-%d=%d\n",a,b,a-b);
            }
            else if(ch=='*')
            {
                printf("result is:%d*%d=%d\n",a,b,a*b);
            }
            else if(ch=='/')
            {
                printf("result is:%d/%d=%d\n",a,b,a/b);
            }
            else if(ch=='%')
            {
                printf("result is:%d%%%d=%d\n",a,b,a%b);
            }
           
        }
        printf("press 'n' to break and any key to continue\n");
        scanf(" %c",&ch1);
        if(ch1=='n')
        {
            break;
        }
        
        
    }
    while(1);
    {
    }
    return 0;
}


