/*Read 6 subject marks of n students and count how many of them scored above 80% and print the count.
use nested loop to read the marks for 6 subjects and calculate the sum and percentage.*/

#include<stdio.h>
int main()
{
    int m,s=0,i,j,n,c=0;
    float per;
    printf("enter no of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=0;
        printf("enter subject marks:\n");
        for(j=1;j<=6;j++)
        {
            scanf("%d",&m);
            s+=m;
        }
        per=s/600.0*100.0;
        printf("total is:%d\n",s);
        printf("percentage is:%f\n",per);
        if(per>80.0)
        {
            c++;
        }
    }
    printf("no of students scored above 80%% is:%d",c);
    
}

