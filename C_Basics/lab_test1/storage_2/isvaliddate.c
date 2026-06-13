#include"dates.h"
int isvaliddate(int d,int m,int y)
{
	if(m>=1&&m<=12)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			if(d>=1&&d<=31)
			{
				return 1;
			}
			else
			{
				return 0;		
			}
		}
		else if(m==4||m==6||m==9||m==11)
		{
			if(d>=1&&d<=30)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if(m==2)
		{
			int r=0;
			r=isleapyear(y);
			if(r==1)
			{
				if(d>=1&&d<=29)
				{
					return 1;
				}
				else
				{
					return 0;	
				}
			}
			else
			{
				if(d>=1&&d<=28)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			
			}
		}
	}
	else
	{
		return 0;
	}
}
int isleapyear(int y)
{
	if((y%100!=0&&y%4==0)||(y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
