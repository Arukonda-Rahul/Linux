#include<stdio.h>
int main()
{
    int a,b,i;
    char ch;
    while(1)
    {   
        printf("enter operator:");
        scanf(" %c",&ch);
        if(ch=='+')
        {
            
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("result is:%d+%d=%d\n",a,b,a+b);
        }
        else if(ch=='-')
        {
            
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("result is:%d-%d=%d\n",a,b,a-b);
        }
        else if(ch=='*')
        {
            
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("result is:%d*%d=%d\n",a,b,a*b);
        }
        else if(ch=='/')
        {
            
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("result is:%d/%d=%d\n",a,b,a/b);
        }
        else if(ch=='%')
        {
            
            printf("enter two numbers:");
            scanf("%d%d",&a,&b);
            printf("result is:%d%%%d=%d\n",a,b,a%b);
        }
        else
        {
            printf("enter a valid operator\n");
            break;
        }
        
    }
    return 0;
}

