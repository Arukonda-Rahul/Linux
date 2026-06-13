/*
3 Declare an array of size 10. Enter 10 elements and save them in the array. 
Print the array . Find out the biggest and smallest numbers and their indexes and print.
*/
#include<stdio.h>
int main()
{
    int i,min_index,max_index;
    int a[10];
    printf("enter 10 elements int array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Numbers are:%d\n",a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            max_index=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            min_index=i;
            
        }
    }
    printf("Minimum number: %d, Index: %d\n", min, min_index);
    printf("Maximum number: %d, Index: %d\n", max, max_index);
}
