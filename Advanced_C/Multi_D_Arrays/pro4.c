/*		MATRIX MULTIPLICATION   */


#include<stdio.h>
int main()
{
	int i,j,k,sum=0,r1=3,c1=3,r2=3,c2=3,r=3,c=3;
	int arr1[r1][c1],arr2[r2][c2],res[r][c];
	if(c1==r2)
	{
	    for(i=0;i<r1;i++)
	    {
	        printf("enter matrix1-row%d\n",i);
		    for(j=0;j<c1;j++)
		    {
			    scanf("%d",&arr1[i][j]);
		    }
	    }
	
	    for(i=0;i<r2;i++)
	    {
	        printf("enter matrix2-row%d\n",i);
		    for(j=0;j<c2;j++)
		    {
			    scanf("%d",&arr2[i][j]);
		    }
	    }
	    for(i=0;i<3;i++)
	    {
		    for(j=0;j<3;j++)
		    {
		        sum=0;
		        for(k=0;k<3;k++)
		        {	
			        sum+=arr1[i][k]*arr2[k][j];
		        }
		        res[i][j]=sum;
		    }
	    }
	    printf("after multiplication:\n");
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
	    printf("matrix miultiplication not possible\n");
	}
}


