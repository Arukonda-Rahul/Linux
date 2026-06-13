#include<stdio.h>
int main()
{
    int i,n,r;
    printf("enter 1 for ascending and 2 for descending:");
    scanf("%d",&n);
    if(n==1)
    {
	printf("enter range:");
        scanf("%d",&r);
        i=1;
        while(i<=r)
        {
            printf("%d\n",i);
            i++;
        }
    }
    else if(n==2)
    {
	printf("enter range:");
        scanf("%d",&r);
        i=r;
        while(i>0)
        {
            printf("%d\n",i);
            i--;
        }
    }
    else
    {
        printf("enter a valid choice");
    }
    return 0;
}
