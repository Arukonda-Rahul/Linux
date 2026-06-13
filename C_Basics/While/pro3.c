#include<stdio.h>
int main()
{
    int r1,r2,i,j;
    printf("enter range:");
    scanf("%d%d",&r1,&r2);
    i=r1;
    while(i<=r2)
    {
        if(i%2!=0)
        {
            printf("%d is odd\n",i);
        }
        i++;
    }
    j=r1;
    while(j<=r2)
    {
        if(j%2==0)
        {
            printf("%d is even\n",j);
        }
        j++;
    }
    return 0;
}
