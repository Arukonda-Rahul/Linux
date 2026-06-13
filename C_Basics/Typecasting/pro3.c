#include <stdio.h>

int main()
{
    float a;
    printf("enter value:");
    scanf("%f",&a);
    int d,e,f,g;
    d=a;
    e=d%10;
    printf("the right most digit of decimal part:%d\n",e);
    float h=a*10.0;
    f=h;
    g=f%10;
    printf("the left most digit of decimal part is:%d",g);

    return 0;
}

