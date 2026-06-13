/*
4) write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
    return the structure variable using return statement and array element with index. Return type of the function will be struct student.

eg.,
struct student oldest student(struct student arr[])
{ 

return arr[i]; // find the index at which date of  birth is oldest using date comparison function
}
*/
#include"4.header.h"
struct student fun(struct student s[],int n);
int main()
{
	int n,i,j;
	printf("enter no of students:");
	scanf("%d",&n);
	struct student s[n],t;
	for(i=0;i<n;i++)
	{
		printf("enter date");
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
	}
	t=fun(s,n);
	printf("%d-%d-%d",t.d,t.m,t.y);
	return 0;
}
struct student fun(struct student s[],int n)
{
	int i,d,m,y;
	d=s[0].d;
	m=s[0].m;
	y=s[0].y;
	for(i=1;i<n;i++)
	{
		if(s[i].y<y)
		{
			y=s[i].y;
			return s[i];
		}
		else if((s[i].y==y)&&(s[i].m<m))
		{
			m=s[i].m;
			return s[i];
		}
		else if(s[i].d<d)
		{
			d=s[i].d;
			return s[i];
		}
	}
	return s[0];
}
