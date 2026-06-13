#include<stdio.h>
int main()
{
	char c1,c2,c3;
	int d;
	printf("enter 3 numerical characters(0-9):");
	scanf("%c%c%c",&c1,&c2,&c3);
	d=(c1-'0')*100+(c2-'0')*10+(c3-'0');
	printf("combined no:%d",d);
	return 0;
}  
