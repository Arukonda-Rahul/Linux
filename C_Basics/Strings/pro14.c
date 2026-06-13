/*
14) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 
*/

int mystrchr( char str[], char ch)
{
	int l=0,i=0;
	while(str[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=0;i<l;i++)
	{
		if(str[i]==ch)
		{
			return i;
		}
	}	
	return -1;
}
#include<stdio.h>
int main()
{	
	char ch;
	char s[100];
	printf("enter string:\n");
	scanf("%s",s);
	printf("enter character:\n");
	scanf(" %c",&ch);
	int index=mystrchr(s,ch);
	if(index==-1)
	{
		printf("not found\n");
	}
	else
	{
		printf("character found at index:\n%d",index);
	}
	return 0;
}
