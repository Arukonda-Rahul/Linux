/*
3)  read a date in d-m-y format and print it back in given format below:

eg input :2-3-2000
output: 2nd March, 2000

eg input: 4-1-2001
output: 4th January, 2001
*/


#include<stdio.h>
int main()
{
	char *p[12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
	char *p1[4]={"st","nd","rd","th"};
	int d,m,y;
	printf("enter D-M-Y:\n");
	scanf("%d-%d-%d",&d,&m,&y);
	if(d==1||d==21||d==31)
	{
		printf("%d%s",d,p1[0]);
	}
	else if(d==2||d==22)
	{
		printf("%d%s",d,p1[1]);
	}
	else if(d==3||d==23)
	{
		printf("%d%s",d,p1[2]);
	}
	else
	{
		printf("%d%s",d,p1[3]);
	}
	switch(m)
	{
		case 1:printf("-%s",p[0]);
		break;
		case 2:printf("-%s",p[1]);
		break;
		case 3:printf("-%s",p[2]);
		break;
		case 4:printf("-%s",p[3]);
		break;
		case 5:printf("-%s",p[4]);
		break;
		case 6:printf("-%s",p[5]);
		break;
		case 7:printf("-%s",p[6]);
		break;
		case 8:printf("-%s",p[7]);
		break;
		case 9:printf("-%s",p[8]);
		break;
		case 10:printf("-%s",p[9]);
		break;
		case 11:printf("-%s",p[10]);
		break;
		case 12:printf("-%s",p[11]);
		break;
	}	
	printf(" %d",y);
	return 0;

		
}
