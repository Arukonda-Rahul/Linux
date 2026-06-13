/*9)Declare an integer array of size 10 and initialize it to some values.
Print the addresses of each element of the array using a pointer. 
using indirection operator , print the value stored in each element of the array.
*/
#include <stdio.h>
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int *p;
    for(int i=0;i<10;i++)
    {
        p=&a[i];
        printf("%p\n",p);
        printf("the value at a[%d] is%d:\n",i,*p);
    }
    printf("the final value at p:%d:\n",*p);
    return 0;
    
}
