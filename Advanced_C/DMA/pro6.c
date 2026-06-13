/*
6) Write a function, that takes two strings as input and concatenates only the first n characters
 from first string and first m characters from second string and makes a new string.
eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya
*/


#include<stdio.h>
#include<stdlib.h>
void mystrcat(char *d,char *s,int n,int m)
{
	int i=0,l=0,j;
	for(i=n,j=0;j<m;i++,j++)
	{
		*(d+i)=*(s+j);
	}
	*(d+i)='\0';
	printf("after concat:%s",d);
}
int main()
{
	int n,m;
	printf("enter value of n:\n");	
	scanf("%d",&n);
	printf("enter value of m:\n");
	scanf("%d",&m);
	char *s1;
	char *s2;
	s1=(char*)malloc(10*sizeof(char));
	s2=(char*)malloc(10*sizeof(char));
	if(s1==NULL&&s2==NULL)
	{
		printf("memory allocation failed\n");
		return 0;
	}
	else
	{
		printf("enter destination string:\n");
		scanf("%s",s1);
		printf("enter source string:\n");
		scanf("%s",s2);
		mystrcat(s1,s2,n,m);
		free(s1);
		free(s2);	
	}
	return 0;
}
