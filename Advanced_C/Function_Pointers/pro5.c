/*
5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);
*/




#include <stdio.h>
int main()
{
    int a;
    int(*fptr[2])(char*, ...) = {printf,scanf};    
    fptr[1]("%d",&a);  // Read an integer using scanf
    fptr[0]("%d\n", a); // Print the integer using printf
    return 0;
}

