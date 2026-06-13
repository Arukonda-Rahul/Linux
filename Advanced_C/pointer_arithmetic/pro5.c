			

		/* STRLEN()   */
	
#include<stdio.h>

int mystrlen(char *str)
{
	int i=0,l=0;
	while(str[i]!='\0')
	{
		i++;
	l++;
	}
	return l;
}
int main()
{
	char str[20];
	printf("enter string:");
	scanf("%[^\n]s",str);
	int d=mystrlen(str);
	printf("length is:%d\n",d);
	return 0;
}
