/*
4). "Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
            // length of name is 3"  */


#include<stdio.h>
int main()
{
	char s[100];
	int i=0,l=0;
	printf("enter string:\n");
	scanf("%[^\n]s",s);
	while(s[i]!='\0')
	{
		l++;
	i++;
	}
	printf("length is:%d",l);
	return 0;
}

