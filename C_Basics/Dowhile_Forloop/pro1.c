#include<stdio.h>
int main()
{
    int n,i,b,m;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter first no:");
    scanf("%d",&m);
    b=m;
    for(i=1;i<=n-1;i++)
    {
        printf("enter no:\n");
        scanf("%d",&m);
        if(b<m)
        {
            printf("%d is biggest than %d\n",m,b);
            b=m;
        }
        else if(b>m)
        {
            printf("%d is smallest than %d\n",m,b);
            b=b;
            
        }
        else
        {
            printf("%d and %d both are equal\n",b,m);
        }
    }
    
}
