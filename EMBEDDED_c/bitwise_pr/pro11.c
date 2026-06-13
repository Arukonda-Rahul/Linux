/*
11. WAP whether a number is a power of 2 or not?
*/
#include<stdio.h>
int main()
{
    int a,c=0;
    printf("enter no:\n");
    scanf("%d",&a);
    while(a>0)
    {
        a=a&(a-1);
        c++;
    }
    
    if(c==1)
    {
        printf("power of 2");
    }
    else
    {
        printf("not power of 2");
    }
    
    return 0;
}

