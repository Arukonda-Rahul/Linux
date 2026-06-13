/*12) Write a program to replace a given character by another character in a string.*/

#include<stdio.h>
void replace(char *str,char ch,char ch1)
{
	int l=0,i=0;
	while(str[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=0;i<l;i++)
	{
		if(*(str+i)==ch)
		{
			*(str+i)=ch1;
		}
	}
	printf("the result is:\n%s",str);
}
int main()
{
	char ch,ch1;
	char s[100];
	printf("enter string:\n");
	scanf("%s",s);	
	printf("enter character which you want to replace:\n");
	scanf(" %c",&ch);
	printf("enter new character:\n");
	scanf(" %c",&ch1);
	replace(s,ch,ch1);
	return 0;
}

