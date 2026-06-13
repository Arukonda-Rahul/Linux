/*
2) Create an array of structures using the above template. read the data for all elements of the array. and print the topper name with the highest percentage. struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};
*/

#include"2.header.h"
int main()
{
	int i,j;
	printf("enter id of 5 students:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s[i].ID);
	}
	printf("\nenter name of 5 students:");
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i].name);
	}
	for(i=0;i<5;i++)
	{
		printf("\nenter student%d gender",i+1);
		scanf(" %c",&s[i].gender);
	}
	printf("\nenter students marks in 6 subjects out of 100:");
	for(i=0;i<5;i++)
	{
		printf("\nenter student%d marks:",i+1);
		for(j=0;j<6;j++)
		{
			scanf("%d",&s[i].marks[j]);
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\nenter student%d date of birth:",i+1);
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
	}
	int t=0;
	for(i=0;i<5;i++)
	{
		t=0;
		for(j=0;j<6;j++)
		{
			t+=s[i].marks[j];
		}
		s[i].per=(t/600.0)*100.0;
	}
	float max=s[0].per;
	int index;
	for(i=1;i<5;i++)
	{
		if(s[i].per>max)
		{
			max=s[i].per;
			index=i;
		}
	}
	printf("\nthe highest percentage is:%f\nname is:%s\ngender is:%c\n",s[index].per,s[index].name,s[index].gender);
	return 0;
	
}
