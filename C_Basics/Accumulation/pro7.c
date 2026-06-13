#include<stdio.h>
int main()
{
    int i,a,pow,ps=1;
    printf("enter a:\n");
    scanf("%d",&a);
    printf("enter pow:\n");
    scanf("%d",&pow);
    i=1;
    while(i<=pow)
    {
        ps*=a;
        i++;
    }
    printf("result is:%d",ps);
    return 0;
    
}
