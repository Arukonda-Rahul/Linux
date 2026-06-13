		/*			STRCAT    		*/
#include<stdio.h>
void mystrcat(char *d,char *s)
{
	int i=0,l=0,j;
	while(d[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=l,j=0;s[j]!='\0';i++,j++)
	{
		*(d+i)=*(s+j);
	}
	*(d+i)='\0';
	printf("after concat:%s",d);
}
int main()
{
	char s[100];
	char d[100];
	printf("enter string1:\n");
	scanf("%s",d);
	printf("enter string2:\n");
	scanf("%s",s);
	mystrcat(d,s);
	return 0;
}

