#include<stdio.h>
int main()
{
    int n,a,b,i;
    char ch;
    printf("enter range:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("enter character:");
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
        }
        i++;
    }
    return 0;
}
