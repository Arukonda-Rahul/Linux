/*11) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string
*/
#include <stdio.h>
void convertToUppercase(char str[], int length)
{
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i]-32;
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
    convertToUppercase(inputString, length);
    printf("Uppercase result: %s\n", inputString);
    return 0;
}

