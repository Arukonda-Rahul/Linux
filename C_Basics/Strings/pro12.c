/*
12) void strrev( char str[]);
//reverse the string (without using any extra array)
eg., input : str[] = "Kernel";
output : str[] = "lenreK"
*/

#include<stdio.h>
void mystrrev( char str[])
{
	int temp=0,l=0,i=0,j=0;
	while(str[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("after reverse:%s",str);
}
int main()
{
	char s[100];
	printf("enter string:\n");
	scanf("%s",s);
	mystrrev(s);
	return 0;
}
