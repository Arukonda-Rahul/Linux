				/*          AtoI       */


#include<stdio.h>
int myatoi(char *s)
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
		res=(res*10)+*(s+i)-'0';
	}
	return res;
}
int main()
{
	char s[10];
	printf("enter numerical string:\n");
	scanf("%s",s);
	int r=myatoi(s);
	printf("%d\n",r);
	return 0;
}
