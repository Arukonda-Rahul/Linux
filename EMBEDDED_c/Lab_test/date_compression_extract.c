#include<stdio.h>
short int ToDate(int d,int m,int y);
int ExtractMonth(short int r);
int ExtractDay(short int r);
int ExtractYear(short int r);
int main()
{
	short int r=0;
	int d=1,m=9,y=2023,r1,r2,r3;
	y=y%100;
	r=ToDate(d,m,y);
	r1=ExtractMonth(r);
	r2=ExtractDay(r);
	r3=ExtractYear(r);
	printf("Extract MOnth:%d\n",r1);
	printf("Extract Date:%d\n",r2);
	printf("Extract Year:%d\n",r3);
	return 0;
}
short int ToDate(int d,int m,int y)
{
	short int s=0;
	s=s|y;
	d=(d<<7);
	s=s|d;
	m=(m<<12);
	s=s|m;
	return s;
}
int ExtractMonth(short int r)
{
	r=(r>>12)&0x000f;
	return r;
}
int ExtractDay(short int r)
{
	
	r=(r<<4);
	r=(r>>11);
	return r;
}
int ExtractYear(short int r)
{	
	r=(r<<9);
	r=(r>>9);
	return r;
}
