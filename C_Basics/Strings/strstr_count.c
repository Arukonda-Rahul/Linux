#include<stdio.h>

int count(char *m,char *s)
{
	int c=0,i,j;
	for(i=j=0;m[i]!='\0';i++)
	{
		if(m[i]==s[j])
		{	
			j++;
		}
		else
		{
			j=0;
		}
		if(s[j]=='\0')
		{	
			c++;
		}
	}
	return c;
}



int main()
{
	char m[100],s[100];
	printf("enter main:\n");
	scanf("%[^\n]s",m);
	getchar();
	printf("enter sub:\n");
	scanf("%[^\n]s",s);
	int c=count(m,s);
	printf("%d",c);
	return 0;
}
