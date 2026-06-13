#include<stdio.h>
void mystrrev2(char s[],int l);
void mystrrev(char s[],int l)
{
	int temp=0,i=0,j=0;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	printf("reversed string 1:%s\n",s);
}
int main()
{
	int l=0,i=0;
	char s[100];
	printf("enter string:\n");
	scanf("%[^\n]s",s);
	while(s[i]!='\0')
	{
		l++;
	i++;
	}
	mystrrev(s,l);
	mystrrev2(s,l);
	return 0;
}
void mystrrev2(char s[],int l)
{
	static int a=0,i=0;
	int b=0,c=0,temp=0,j=0,z=0;
		while(i<=l)
		{
			if(s[i]==' '||s[i]=='\0')
			{

				b=i;
				c=i-1;
				for(a,j=c;a<j;a++,j--)
				{
					temp=s[a];
					s[a]=s[j];		
					s[j]=temp;
				}
				if(s[i]=='\0')
				{
					break;
				}
			a=i+1;
			}
		i++;
		}
		printf("reversed string2:%s",s);
}

