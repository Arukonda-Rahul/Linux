/*4) Declare 3 integer variables. Declare an integer pointer.
Assign the address of each variable to the pointer in succession 
and print the value of the variable using indirection operator on the pointer.*/

#include <stdio.h>
int main()
{
    int *p;
    int  x,y,z;
    printf("enter x,y and z values:\n");
    scanf("%d%d%d",&x,&y,&z);
    p=&x;
    printf("x=%d\n",*p);
    p=&y;
    printf("y=%d\n",*p);
    p=&z;
    printf("z=%d\n",*p);
    
    return 0;
    
}
