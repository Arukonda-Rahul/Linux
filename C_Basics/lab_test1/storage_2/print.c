#include<stdio.h>
#include"dates.h"

void printdateinformat(int d,int m,int y)
{
	printf("The Student Born On %d",d);
	printsubscript(d);
	printmonthname(m);
	printf("-%d Is Elder Of All",y);

}
void printsubscript(int d)
{
	if(d==1||d==21||d==31)
	{
		printf("st");
	}
	else if(d==2||d==22)
	{
		printf("nd");
	}
	else if(d==3||d==23)
	{
		printf("rd");
	}
	else 
	{
		printf("th");
	}
}
void printmonthname(int m)
{
	if(m==1)
	{
		printf(" January");
	}
	else if(m==2)
	{
		printf(" February");
	}
	else if(m==3)
	{
    		printf(" March");
	}
	else if(m==4)
	{
		printf(" April");
	}
	else if(m==5)
	{
		printf(" May");
	}
	else if(m==6)
	{
		printf(" June");
	}
	else if(m==7)
	{
		printf(" July");
	}	
	else if(m==8)
	{
		printf(" August");
	}
	else if(m==9)
	{
		printf(" September");
	}
	else if(m==10)
	{
		printf(" October");
	}
	else if(m==11)
	{
		printf(" November");
	}
	else 
	{
		printf(" December");
	}
}

