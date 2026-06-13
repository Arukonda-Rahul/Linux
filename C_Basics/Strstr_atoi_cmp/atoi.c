#include<stdio.h>
int myatoi(char s[])
{
	int l=0,i=0;
	while(s[i]!='\0')
	{
		l++;
	i++;
	}
	int res=0;
	for(i=0;i<l;i++)
	{
		res=(res*10)+s[i]-'0';
	}
	return res;	
}
int main()
{
	char s[100];
	printf("enternumeric string:\n");
	scanf("%s",s);
	int no=myatoi(s);
	printf("%d\n",no);
}
	
