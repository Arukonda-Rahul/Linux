/*
3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.

*/

#include"3.header.h"
int compare(struct Test m,struct Test n);
int main() 
{
	struct Test s1, s2;
	printf("Enter student1 ID: ");
	scanf("%d", &s1.ID);
	printf("Enter student1 gender: ");
	scanf(" %c", &s1.gender);
	printf("Enter student2 ID: ");
	scanf("%d", &s2.ID);
	printf("Enter student2 gender: ");
	scanf(" %c", &s2.gender);
	int result = compare(s1, s2);
	printf("%d",result);
	return 0;
}
int compare(struct Test m, struct Test n)
{
	if (m.ID == n.ID && m.gender == n.gender)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

