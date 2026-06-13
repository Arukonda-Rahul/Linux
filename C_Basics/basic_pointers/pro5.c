/*4) Declare 3 pointer variables of integer type, and an integer variable.
Assign the address of integer variable to the 3 pointers. 
Print the variable value using indirection on each pointer variable.
Change the variable value directly and check the values of each of the pointers using indirection.
Change the variable value , using each pointer and print the variable value and 
indirected values of all pointers every time you change.
*/

#include <stdio.h>
int main()
{
    int *p1,*p2,*p3;
    int  x=3;
    p1=&x;
    p2=&x;
    p3=&x;
    printf("x=%d\n",*p1);
    printf("x=%d\n",*p2);
    printf("x=%d\n",*p3);
    x=1;
    printf("x=%d\n",*p1);
    printf("x=%d\n",*p2);
    printf("x=%d\n",*p3);
    *p1=6;
    printf("x=%d\n",*p1);
    *p2=8;
    printf("x=%d\n",*p2);
    *p3=9;
    printf("x=%d\n",*p3);
    printf("x=%d\n",x);
    *p1=20;
    printf("x=%d\n",*p1);
    *p2=30;
    printf("x=%d\n",*p2);
    *p3=40;
    printf("x=%d\n",*p3);
    printf("x=%d\n",x);
    
    
    return 0;
    
}
