#include<stdio.h>
int main()
{
    int a,b,i;
    char ch,ch1='n';
    while(1)
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
        else
        {   
            printf("press 'n' to break and any key to continue\n");
            if(ch1=='n')
            {
                break;
            }
        }
        
    }
    return 0;
}

