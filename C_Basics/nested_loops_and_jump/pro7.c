/*WAP to print below pattern without using nested loops (using a single loop).

*
* *
* * *
* * * *
* * * * *          */

#include <stdio.h>

int main() {
    int i,j,n=5;
    for (i=1,j=1;i<=n*(n+1)/2;i++)
    {
        printf("* ");
        if(i==j*(j+1)/2)
        {
            printf("\n");
            j++;
        }
    }

    return 0;
}

