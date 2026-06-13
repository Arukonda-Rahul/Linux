/* print the below patterns using nested loops:

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1               */

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0&&j%2==0)
            {
                printf("1");
            }
            else if(i%2!=0&&j%2!=0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
    }
}

