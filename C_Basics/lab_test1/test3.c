#include<stdio.h>
int main()
{
	int y1,y2,m1,m2,d1,d2;	
	printf("enter dob of candidate1:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("enter dob of candidate2:");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	if((y1==y2)&&(m1==m2)&&(d1==d2))
	{
		printf("Both are of same age");
	}
	else if((y1==y2)&&(m1==m2))
	{
		if(d1<d2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	/*else if((d1==d2)&&(m1==m2))

		if(m1<m2)
		{
		printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}*/
	else if((d1==d2)&&(m1==m2))
	{
		if(y1<y2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else if((d1==d2)&&(y1==y2))
	{
		if(m1<m2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else if(d1==d2)
	{
		if(y1<y2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else if(y1==y2)
	{
		if(m1<m2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else if((d1!=d2)&&(m1!=m2)&&(y1!=y2))
	{
		if(y1<y2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,y1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else
	{
		printf("enter valid dob");
	}
	return 0;
}
