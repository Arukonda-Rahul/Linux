#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter values:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a<b?a:b;
    f=e<c?e:c;
    g=f<d?f:d;
    printf("Smaller is:%d",g);
    
    return 0;
}

