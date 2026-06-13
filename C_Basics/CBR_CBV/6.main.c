/*
6)Write two source files, main.c and swap.c. 
The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
*/
#include<stdio.h>
void swap(int a[]);
int main()
{
    int a[2]={1,2};
    swap(a);
    printf("%d,%d",a[0],a[1]);
    return 0;
}
