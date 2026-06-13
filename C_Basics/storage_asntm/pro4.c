#include<stdio.h>
void fun(int n)
{
		static int i=1;
		if(i==n)
		{
			if(i==11||i==12||i==13||i%100==11||i%100==12||i%100==13)
			{
				printf("Hello! Iam called %dth time\n",i);
			}	
			else if(i%10==1)
			{
				printf("Hello! I am called %dst time\n",i);
			}
			else if(i%10==2)
			{
				printf("Hello! I am called %dnd time\n",i);
			}
			else if(i%10==3)
			{
				printf("Hello! I am called %drd time\n",i);
			}
			else
			{
				printf("Hello!I am called %dth time\n",i);
			}
				
		}
		else if(i==11||i==12||i==13||i%100==11||i%100==12||i%100==13)
		{
			printf("I am called %dth time\n",i);
		}
		else if(i%10==1)
		{
			printf("I am called %dst time\n",i);
		}
		else if(i%10==2)
		{
			printf("I am called %dnd time\n",i);
		}
		else if(i%10==3)
		{
			printf("I am called %drd time\n",i);
		}
		else
		{
			printf("I am called %dth time\n",i);
		}
i++;
}
int main()
{	
	static int n;
	printf("enter  value of n:\n");
	scanf("%d",&n);
	int j=1;
	while(j<=n)
	{
		fun(n);
		j++;
	}
	return 0;
}
	
