#include<stdio.h>
int Calculate_Net_Salary(int total,int lop,int m,int y);
int main()
{
	int net_sal,m,y,total,lop;
	while(1)
	{
		printf("enter totalsalary\n");
		scanf("%d",&total);
		printf("enter month\n");
		scanf("%d",&m);
		printf("enter year\n");
		scanf("%d",&y);
		printf("enter number of lops\n");
		scanf("%d",&lop);
		if(m>=1&&m<=12&&y>0&&total>0&&lop>=0)
		{
			net_sal=Calculate_Net_Salary(total,lop,m,y);
			printf("Total Net Salary is:%d\n",net_sal);
		}
		else
		{
			printf("enter valid data\n");
		}
	}
	return 0;
}

