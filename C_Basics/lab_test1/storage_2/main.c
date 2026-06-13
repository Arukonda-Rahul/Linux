#include<stdio.h>
#include"dates.h"
int main()
{
	int n,d1,m1,y1,dv,dc;
	int d2=0;
	int m2=0;
	int y2=99999;
	printf("Enter No Of Students\n");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		printf("Enter Student%d DOB:\n",i);
		scanf("%d-%d-%d",&d1,&m1,&y1);
		dv=isvaliddate(d1,m1,y1);
		if(dv==1)
		{
			dc=datecompare(d1,m1,y1,d2,m2,y2);
		}
		
		else
		{
			while(dv!=1)
			{
				printf("Enter Valid Date Of Student%d\n",i);
				scanf("%d-%d-%d",&d1,&m1,&y1);
				dv=isvaliddate(d1,m1,y1);
			}
			dc=datecompare(d1,m1,y1,d2,m2,y2);
			
		}
		if(dc==0)
		{
			d2=d1;
			m2=m1;
			y2=y1;
		}
	i++;
	}
	printdateinformat(d2,m2,y2);
	return 0;
}
	
