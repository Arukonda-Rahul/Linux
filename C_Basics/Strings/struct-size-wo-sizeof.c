#include<stdio.h>
#define mysize(a) ((long int)(&a+1)-(long int)(&a))
struct student
{
    int id;
    char s[10];
    float p;
}x;
int main()
{
    printf("%ld",mysize(x));
}
