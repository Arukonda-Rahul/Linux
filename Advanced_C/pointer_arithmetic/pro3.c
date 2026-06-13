/*
3) declare different pointers with different data types. 
Print the sizes of the pointer variables using sizeof operator. 
Also print the sizeof pointer variables with indirection operators. Observe the results.
*/

#include <stdio.h>
int main()
{
    int *i;
    char*c;
    float *f;
    double *d;
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(c));
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));
    printf("%lu\n",sizeof(*i));
    printf("%lu\n",sizeof(*c));
    printf("%lu\n",sizeof(*f));
    printf("%lu\n",sizeof(*d));
    return 0;
}


/*
OUTPUT:

8
8
8
8
4
1
4
8

THE SIZE OF POINTER VAIRABLE IS SAME FOR ALL 8BYTES
BUT THE SIZE OF INDIRECTION OPERATOR VARIES ACCORDING TO THE DATATYPE
*/
 
