/*6) declare different pointers with different data types. 
Print the sizes of the pointer variables using sizeof operator.
Why do u think all of them are giving same size irrespective of the data type ?
*/
#include <stdio.h>
int main()
{
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    long double *p5;
    printf("size of int:%lu\n",sizeof(p1));
    printf("size of float%lu\n",sizeof(p2));
    printf("size of char:%lu\n",sizeof(p3));
    printf("size of double:%lu\n",sizeof(p4));
    printf("size of long double:%lu\n",sizeof(p5));
    /*The size of pointers is always the same regardless of the data 
    they point because all of them store a memory address.*/
    return 0;
    
}
