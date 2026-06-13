#include<stdio.h>
int main ()
{
    int n1,n2,i,count=0;
    printf ("enter first no:");
    scanf ("%d", &n1);
    printf("enter second no:");
    scanf("%d",&n2);
    i=n1;
    printf("the following numbers are divisible with 10:");
    while(i<=n2)
    {
        
        if(i%10==0)
        {
            printf("%d\n",i);
            count++;
        }
    i++;
    }
    printf("the no of nos divisible by 10 are:%d\n",count);

}

