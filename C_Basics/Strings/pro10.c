/*
10)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

*/



#include <stdio.h>
void convertTolowercase(char str[], int length)
{
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i]+32;
        }
    }
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    int length = 0;
    while (inputString[length] != '\0')
    {
        length++;
    }
    convertTolowercase(inputString, length);
    printf("Lowerrcase: %s\n", inputString);
    return 0;
}

