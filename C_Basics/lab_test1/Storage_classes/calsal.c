int No_Of_Days_In_Month(int m,int y);
int Calculate_Net_Salary(int total,int lop,int m,int y)
{
	int net_s=0;
	int days=0;
	days=No_Of_Days_In_Month(m,y);
	net_s=total-lop*(float)total/days;
	return net_s;
}

