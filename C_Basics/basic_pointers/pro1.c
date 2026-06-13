/*1)Write a program to print the address of a variable , its value ,its size,
try different executions and note the address printed. 
Assign the address of the variable to a pointer variable.
Print the size of pointer and its indirected value (apply * operator).*/
#include <stdio.h>
int main()
{
    int x=5;
    printf("the address is:%p\n",&x);
    printf("the value is:%d\n",x);
    printf("the size is:%lu\n",sizeof(x));
    /*First execution:
    the address is:0x7ffd0cc42f54
    the value is:5
    the size is:4
    First execution:
    the address is:0x7ffe4a420c04
    the value is:5
    the size is:4*/
    int *p=&x;
    printf("the size of pointer:%lu",sizeof(p));
    printf("the value of *p:%d",*p);
    

    return 0;
    
}
