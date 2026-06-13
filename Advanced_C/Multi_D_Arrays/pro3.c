/*
Write a program  for matrix addition and subtraction.
*/			



#include<stdio.h>
int main()
{
	static int r,c,r1,c1,r2,c2;
	int i,j,sum=0;
	printf("enter row1 size and column1 size:\n");
	scanf("%d%d",&r1,&c1);
	printf("enter row2 size and column2 size:\n");
	scanf("%d%d",&r2,&c2);
	if((r1==r2)&&(c1==c2))
	{
	r=r1,c=c1;		
	int  arr1[r1][c1],arr2[r2][c2],res[r][c];
	
	for(i=0;i<r1;i++)
	{
	printf("enter elements into matrix1-row:%d\n",i);
		for(j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
	printf("enter elements into matrix2-row%d\n",i);
		for(j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        res[i][j]=arr1[i][j]+arr2[i][j];
	    }
	}
	printf("the addition is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        res[i][j]=arr1[i][j]-arr2[i][j];
	    }
	}
	printf("the subtraction is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("operation not possible:\n");
	}
}

