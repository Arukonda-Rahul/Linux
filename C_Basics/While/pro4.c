#include<stdio.h>
int main()
{
    int a,r,i;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter the range:");
    scanf("%d",&r);
    i=r;
    while(i>0)
    {
        printf("%d*%d=%d\n",a,i,a*i);
        i--;
    }
    return 0;
}
