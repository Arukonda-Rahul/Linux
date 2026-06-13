#include<stdio.h>
int main()
{
	int a,b,i,j,x,y;
	printf("enter input");
	scanf("%d%d",&a,&b);
	for(i=1,y=a;i<b;i++)
	{
		for(j=1,x=0;j<=a;j++)
		{
			x+=y;
		}
		y=x;
	}
	printf("%d",y);
	return 0;
}
