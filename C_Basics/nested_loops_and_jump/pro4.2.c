/*print the below pattern while loop 
*
* *
* * *
* * * *
* * * * *                     */

#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf(" *");
            j++;
        }
        printf("\n");
    i++;
    }
}

