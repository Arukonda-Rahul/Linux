/*
Declare a two dimensional array of characters, read names from the user and
 print them back with each individual character format (%c) in a loop.
*/


#include<stdio.h>
int main()
{
    
    int i,j,n;
    printf("enter number of names:\n");
    scanf("%d",&n);
    char arr[n][100];
    for(i=0;i<n;i++)
    {
        printf("enter name %d into row:%d\n",i+1,i);
        scanf("%s",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;arr[i][j]!='\0';j++)
        {
            printf("%c\t",arr[i][j]);
        }
        printf("\n");
    }
    
}
