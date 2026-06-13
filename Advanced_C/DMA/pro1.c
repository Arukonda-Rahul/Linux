/*
1) create an integer dynamically ,read and print its value
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(2*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation failed\n");
	}
	else
	{
		printf("enter value:\n");
		scanf("%d",&*p);
		printf("%d\n",*p);
	}
	free(p);
	return 0;
}
	
