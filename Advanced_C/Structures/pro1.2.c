/*
struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate the percentage of marks, and store the percentage using per pointer member, 
and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).

*/


#include"1.2.header.h"
void fun(int *m,float *p);
int main()
{
	int n,i,j;
	printf("enter no of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter student ID:");
		scanf("%d",&s[i].ID);
		printf("enter name:");
		scanf("%s",s[i].name);
		printf("enter date");
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
		printf("enter markes:");
		for(j=0;j<6;j++)
		{
			scanf("%d",&s[i].marks[j]);
		}
		printf("enter gender:");
		scanf(" %c",&s[i].gender);
	}
	for(i=0;i<n;i++)
	{
		printf("ID :%d\n",s[i].ID);
		printf("name :%s\n",s[i].name);
		printf("date :%d-%d-%d\n",s[i].d,s[i].m,s[i].y);
		fun(s[i].marks,&s[i].per);
		printf("percentage:%f\n",s[i].per);
		if(s[i].gender=='m')
			printf("gender : male\n");
		else
			printf("gender : female\n");

	}
	return 0;
}
void fun(int *m,float *p)
{
	int i,sum=0;
	float r;
	for(i=0;i<6;i++)
	{
		sum=sum+m[i];
	}
	*p=sum/(float)6;

}
