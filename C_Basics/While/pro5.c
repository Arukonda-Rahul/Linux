#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the repeat value:");
    scanf("%d",&a);
    i=1;
    while(i<=a)
    {
        printf("enter value:\n");
        scanf("%d",&b);
        if(b==0)
        {
            printf("zero\n");
        }
        else if(b>0)
        {
            printf("positive\n");
        }
        else
        {
            printf("negative\n");
        }
        i++;
    }
    return 0;
}
