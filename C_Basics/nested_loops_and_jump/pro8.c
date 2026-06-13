/*
print the below diamond shape using nested loops
            *
         * * *
       * * * * *
    * * * * * * *
 * * * * *  *  * * *
    * * *  *  * * *
       * * * * *
         * * *
            *                */











#include <stdio.h>
int main() {
    int i,j,rows=5,spaces;
    spaces=rows-1;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=spaces;j++)
        {
            printf(" ");
        }
        spaces--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    spaces=1;
    for(i=1;i<=rows-1;i++)
    {
        for(j=1;j<=spaces;j++)
        {
            printf(" ");
        }
        spaces++;
        for(j=1;j<=2*(rows-i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

