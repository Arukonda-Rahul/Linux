/*
2) create a string dynamically, read and print its value.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p;
	p=(char*)malloc(10*sizeof(char));
	if(p==NULL)
	{
		printf("memory allocation failed\n");
	}
	else
	{
		printf("enter string:\n");
		scanf("%s",p);
		printf("the string is :%s\n",p);
	}
	free(p);
	return 0;
}
	
