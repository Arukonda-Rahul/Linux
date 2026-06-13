/*3)Write a program to take input for two character variables using pointers and
find out which character has higher ascii value.*/

#include <stdio.h>
int main()
{
    char *p1,*p2;
    char x,y;
    printf("enter x and y values:\n");
    scanf(" %c %c",&x,&y);
    p1=&x;
    p2=&y;
    if(*p1>*p2)
    {
        printf("%c has highest ascii value\n",x);
    }
    else if(*p1<*p2)
    {
        printf("%c has highest ascii value\n",y);
    }
    else
    {
       printf("both have same ascii values"); 
    }
    return 0;
    
}
