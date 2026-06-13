/*

7)Write a function that takes a main string and two sub strings (need not be same length),
 and replace every occurrence of first substring with the second substring in main string and return a new string as output.

eg., input : kernel  e   xxx

output: kxxxrnxxxl
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void replace(char *s,char*s1,char*s2,int l1)
{
	char t[100];
	int i,l;	
	for(i=0;s[i]!='\0';i++)
	{
		l=strstr(s,s1)-s;//to get index p-p=i
		if(i==l)
		{
			strcpy(t,s+i);
			s[i]='\0';
			strcat(s,s2);
			strcat(s,t+l1);
		}
	}				
}
int main()
{
	char *s,*s1,*s2;
	int l1=0;
	s=(char*)malloc(100*sizeof(char));
	s1=(char*)malloc(20*sizeof(char));
	s2=(char*)malloc(20*sizeof(char));
	if(s==NULL&&s1==NULL&&s2==NULL)
	{
		printf("memory allocation failed\n");
		return 0;
	}
	else
	{
		printf("enter main string:\n");
		scanf("%[^\n]s",s);
		printf("enter substring1:\n");
		scanf(" %[^\n]s",s1);
		printf("enter substring2:\n");
		scanf(" %[^\n]s",s2);
		l1=strlen(s1);
		replace(s,s1,s2,l1);
		printf("string after concatination is:%s",s);
		free(s);
		free(s1);
		free(s2);
	}
	return 0;
}
			
