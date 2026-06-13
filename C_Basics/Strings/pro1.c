/* 1). Take a string as an input, and count the number of words in the string.
   Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
*/

#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter string:\n");
    scanf("%[^\n]s", s);

    int c = 0, i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '.')
        {
            while (s[i] == ' ' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '.')
            {
                i++;
            }
        }
        else
        {
            c++;
            while (s[i] != '\0' && s[i] != ' ' && s[i] != ',' && s[i] != '!' && s[i] != '?' && s[i] != '.')
            {
                i++;
            }
        }
    }

    printf("Number of words: %d\n", c);

    return 0;
}

