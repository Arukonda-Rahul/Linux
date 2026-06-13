/*
7. WAP to implement the sizeof operation using the bitwise operator.  
*/
#include <stdio.h>
int fund(void)
{
    int c=0,a=1;
    while(a)
    {
        c++;
        a=a<<1;
    }
    return c;
}
int func(void)
{
    char a=1;
    int c=0;
    while(a)
    {
        c++;
        a=a<<1;
    }
    return c;
}
int funl(void)
{
    long int a=1;
    int c=0;
    while(a)
    {
        c++;
        a=a<<1;
    }
    return c;
}
int funs(void)
{
    short int a=1;
    int c=0;
    while(a)
    {
        c++;
        a=a<<1;
    }
    return c;
}

int main()
{
    int x,r;
    printf("enter 1)for size of int:\n2)for size of char:\n3)for long int\n4)for short int");
    scanf("%d",&x);
    switch(x)
    {
        case 1:r=fund();
            printf("the size of int is:%d bytes",r/8);
            break;
        case 2:r=func();
            printf("the size of char is:%d byte",r/8);
            break;
        case 3:r=funl();
            printf("the size of long int is:%d bytes",r/8);
            break;
        case 4:r=funs();
            printf("the size of short int is:%d bytes",r/8);
            break;
            
    }

    return 0;
}

