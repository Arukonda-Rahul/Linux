/*
2). Write a program that reads a string as input, and determines whether the string is a palindrome or not.
*/

#include<stdio.h>
int palindrome (char str[],int l)
{
	int i=0,j=0;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			return 0;
		}
	}
	return 1;
}

void convertTolowercase(char str[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
	{
            str[i] = str[i]+32;
        }
    }
}
int main()
{
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    int length = 0;
    while (inputString[length] != '\0')
    {
        length++;
    }
    convertTolowercase(inputString, length);  
    int r=palindrome(inputString,length);
    printf("%d",r);
    return 0;
}

