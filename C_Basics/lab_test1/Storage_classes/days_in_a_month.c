int Is_LeapYear(int y);
int No_Of_Days_In_Month(int m,int y)
{
	int l=0;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		return 31;
	}
	else if(m==4||m==6||m==9||m==11)
	{
		return 30;
	}
	else if(m==2)
	{
		l=Is_LeapYear(y);
		if(l==1)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
}
int Is_LeapYear(int y)
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
