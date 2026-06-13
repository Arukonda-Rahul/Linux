/*
given string char str[]="123456789";
WAP that displays the following pattern using the characters of the string.

        1        
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5


*/

#include <stdio.h>
int main() 
{
    char str[] = "123456789";

    int n = 5;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[i + j]);
            if (j < i) 
            {
                printf(" ");
            }
        }
        for (int j = i - 1; j >= 0; j--) 
        {
            printf(" %c", str[i + j]);
        }
        printf("\n");
    }
    return 0;
}

