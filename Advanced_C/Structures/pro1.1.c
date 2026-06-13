/*
1) Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};
*/

#include"1.1header.h"
void printall(struct student s)
{
	printf("student ID is:%d\nstudent name is:%s\nstudent marks is:%d %d %d %d %d %d\nstudent dob is:%d-%d-%d\nstudent per is:%f\nstudent gender is:%c\n",s.ID,s.name,s.marks[0],s.marks[1],s.marks[2],s.marks[3],s.marks[4],s.marks[5],s.d,s.m,s.y,s.per,s.gender);
}
int main()
{
	s1.ID=1;
	s1.name[0]='r';
	s1.name[1]='a';
	s1.name[2]='h';
	s1.name[3]='u';
	s1.name[4]='l';
	s1.name[5]=0;
	s1.marks[0]=30;
	s1.marks[1]=40;
	s1.marks[2]=50;
	s1.marks[3]=60;
	s1.marks[4]=45;
	s1.marks[5]=60;
	s1.d=1;
	s1.m=11;
	s1.y=2023;
	s1.per=90;
	s1.gender='m';
	printf("enter student2 ID:");
	scanf("%d",&s2.ID);
	printf("\nenter student2 name:");
	scanf("%s",s2.name);
	printf("\nenter student2 marks in 6 subjects:");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&s2.marks[i]);
	}
	printf("\nenter student2 dob:");
	scanf("%d-%d-%d",&s2.d,&s2.m,&s2.y);
	printf("\nenter student2 percentage:");
	scanf("%f",&s2.per);
	printf("\nenter student2 gender:");
	scanf(" %c",&s2.gender);
	printall(s1);
	printall(s2);
	return 0;
}

