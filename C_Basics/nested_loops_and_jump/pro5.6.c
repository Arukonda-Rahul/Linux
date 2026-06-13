/* print the below patterns using nested loops:

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1                   */

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                
                printf("%d",i);
               
            }
            
        }
        printf("\n");
    }
}

