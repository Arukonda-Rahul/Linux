#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,s6;
	float per;
	int total_marks=600;
	printf("enter subject marks:");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	float total=(s1+s2+s3+s4+s5+s6);
	per=total/total_marks*100;
	printf("per is:%f\n",per);
	if(per>=80)
	{
		printf("Honours");
	}
	else if(per>=60)
	{
		printf("First division");
	}
	else if(per>=50)
	{
		printf("second division");
	}
	else if(per>=40)
	{
		printf("third division");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
