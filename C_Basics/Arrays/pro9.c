/*9 Write a program to print an integer in binary format using arrays.*/
#include<stdio.h>
int main()
{
    int i=0,n,t=0,l=0;
    int a[100];
    printf("enter number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%2;
        a[i]=t;
        i++;
        n=n/2;
        l++;
    }
    printf("the binary values of are:\n");
    for(i=l-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    
    
}
