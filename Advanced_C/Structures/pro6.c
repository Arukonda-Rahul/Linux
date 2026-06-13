/*
6) Count and print how many girls and how many boys there are in the class.
*/


#include"6.header.h"
int main()
{
	int n,i,m=0,f=0;
	printf("enter no of students:\n");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("\nenter student%d name:",i+1);
		scanf("%s",s[i].name);
		printf("\nenter gender");
		scanf(" %c",&s[i].gender);
	}
	for(i=0;i<n;i++)
	{
		if(s[i].gender=='m')
		{
			m++;
		}
		else
		{
			f++;
		}
	}
	printf("\nno of boys:%d",m);
	printf("\nno of girls:%d",f);
	return 0;
}
