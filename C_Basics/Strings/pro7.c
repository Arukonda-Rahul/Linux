/*
7) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
*/

#include<stdio.h>
int mystrlen(char s[])
{
	int l=0,i=0;

	while(s[i]!='\0')
	{
		l++;
	i++;
	}
	return l;
}
int main()
{
	char s[100];	
	printf("enter string:\n");
	scanf("%[^\n]s",s);
	int length=mystrlen(s);
	printf("length is:%d",length);
	return 0;
}



