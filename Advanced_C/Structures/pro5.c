/*
5) Write a function to take an array of structures as arguments, 
and convert all their names into capital letters( strupr implementation). print the data in the main function.
*/


#include"5.header.h"
int n;
void toup(struct student s[])
{
	int i,j=0;
	for(i=0;i<n;i++)
	{	
		j=0;
		while(s[i].name[j]!='\0')
		{
        		if(s[i].name[j]>='a'&&s[i].name[j]<='z') 
			{
            			s[i].name[j]=s[i].name[j]-32;
        		}
		j++;
	    	}	
	}
}
int main()
{
	int i,j;
	printf("enter no of students:\n");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter student%d ID:",i+1);
		scanf("%d",&s[i].ID);
		printf("\nenter student%d name:",i+1);
		scanf("%s",s[i].name);
	}
	toup(s);
	for(i=0;i<n;i++)
	{
		printf("\n%s",s[i].name);
	}
	return 0;
}
