#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter d-m-y:");
	scanf("%d-%d-%d",&d,&m,&y);
	if((y>=1900)&&(y<=2199)&&(m>=1&&m<=12))
	{
		switch(m)
		{
			case 1:if(d>=1&&d<=31)
				{
					printf("valid date");
				}
				else	
				{
					printf("invalid date");
				}
				break;
			case 2:if(y%400!=0&&y%4==0||y%100==0)
				{
					if(d>=1&&d<=29)
					{
						printf("valid date");
					}
					else
					{
						printf("invalid date");
					}
				}
				else if(d>=1&&d<=28)
				{
					printf("valid date");
				}
				else
				{
					printf("invalid date");	
				}
				break;
			case 3:
			if(d>=1&&d<=31)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 4:
			if(d>=1&&d<=30)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 5:
			if(d>=1&&d<=31)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 6:
			if(d>=1&&d<=30)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 7:
			if(d>=1&&d<=31)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 8:
			if(d>=1&&d<=31)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 9:
			if(d>=1&&d<=30)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 10:
			if(d>=1&&d<=31)
			{
				printf("valid date");	
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 11:
			if(d>=1&&d<=30)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
			case 12:
			if(d>=1&&d<=31)
			{
				printf("valid date");
			}
			else
			{
				printf("invalid date");
			}
			break;
		}
	
	}
	else
	{
		printf("invalid date");
	}
	return 0;
}
