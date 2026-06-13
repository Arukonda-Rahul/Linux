/*
3) create a string dynamically, copy a string constant to it ( "Kernel").
 Create another string dynamically. Copy the first string to second string.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char*p1;
	char s[100]="kernel";
	p1=(char*)malloc(10*sizeof(char));
	if(p1==NULL)
	{
		printf("memory allocation failed\n");
	}
	else
	{
		strcpy(p1,s);
		printf("%s",p1);
	}
	free(p1);
	return 0;
}
	
