/*1 Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers.*/


#include <stdio.h>
int main()
{
    int i;
    int a[100];
    for(i=0;i<100;i++)
    {
        a[i]=i+1;
    }
    for(i=0;i<100;i++)
    {
        printf("%d\n",a[i]);
    }
    for(i=0;i<100;i++)
    {
        
        if(a[i]%2==0)
        {
            printf("even numbers:%d\n",a[i]);
        }
    }
    for(i=0;i<100;i++)
    {
        
        if(a[i]%2!=0)
        {
            printf("odd numbers:%d\n",a[i]);
        }
    }
    for(i=0;i<100;i++)
    {
        printf("nos from 6-105:%d\n",a[i]+5);
    }
    return 0;
}

