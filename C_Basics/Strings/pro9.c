/*
9) void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";
*/

#include<stdio.h>
void mystrcat( char d[] , char s[])
{
	int i=0,l=0,j;
	while(d[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=l,j=0;s[j]!='\0';i++,j++)
	{
		d[i]=s[j];
	}
	printf("after concat:%s",d);
}
int main()
{
	char s[100];
	char d[100];
	printf("enter string1:\n");
	scanf("%s",s);
	printf("enter string2:\n");
	scanf("%s",d);
	mystrcat(d,s);
	return 0;
}
