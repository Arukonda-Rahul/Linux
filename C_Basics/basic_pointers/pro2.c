/*2 Write a program to add two variables using thier pointers.*/
#include <stdio.h>
int main()
{
    int *p1,*p2;
    int x,y;
    printf("enter x and y values:\n");
    scanf("%d%d",&x,&y);
    p1=&x;
    p2=&y;
    printf("%d+%d=%d",*p1,*p2,*p1+*p2);
    return 0;
}

