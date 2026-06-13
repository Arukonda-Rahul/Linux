			/*      STRCPY       */


#include<stdio.h>
void mystrcpy(char *s,char *d)
{
	int i=0;
	while(s[i]!='\0')
	{
		*(d+i)=*(s+i);
	i++;
	}
	*(d+i)=='\0';
}

int main()
{
	char d[10],s[10];
	printf("enter source string:\n");
	scanf("%s",s);
	printf("enter destination string:\n");
	scanf("%s",d);
	mystrcpy(s,d);
	printf("after cpy:%s",s);
	return 0;
}
