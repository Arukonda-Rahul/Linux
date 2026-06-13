/*4) Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.*/

#include <stdio.h>
int *fun(void)
{
    static int a;
    if(a!=0)
    {
        a=a*a;
    }
    return &a;
}
int main()
{
    int i,*d;
    int a[10];
    printf("enter values into array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        d=fun();
        if(*d!=0)
        {
            printf("%d\n",*d);
        }
        *d=a[i];
    }
    
    return 0;
}

