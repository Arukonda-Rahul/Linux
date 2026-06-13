#include<stdio.h>
int main()
{
    int d,m,y,n,i;
    printf("enter no of students:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("enter dob:\n");
        scanf("%d-%d-%d",&d,&m,&y);
        if(m==1)
        {
            printf("Date is:%dJanuary%d\n",d,y);
        }
        else if(m==2)
        {
            printf("Date is:%dFebruary%d\n",d,y);
        }
        else if(m==3)
        {
            printf("Date is:%dMarch%d\n",d,y);
        }
        else if(m==4)
        {
            printf("Date is:%dApril%d\n",d,y);
        }
        else if(m==5)
        {
            printf("Date is:%dMay%d\n",d,y);
        }
        else if(m==6)
        {
            printf("Date is:%dJune%d\n",d,y);
        }
        else if(m==7)
        {
            printf("Date is:%dJuly%d\n",m,y);
        }
        else if(m==8)
        {
            printf("Date is:%dAugust%d\n",d,y);
        }
        else if(m==9)
        {
            printf("Date is:%dseptember%d\n",d,y);
        }
        else if(m==10)
        {
            printf("Date is:%doctober%d\n",d,y);
        }
        else if(m==11)
        {
            printf("Date is:%dNovember%d\n",d,y);
        }
        else if(m==12)
        {
            printf("Date is:%dDecember%d\n",d,y);
        }
	else
	{
		printf("enter a valid month\n");
	}

        if(y%100!=0&&y%4==0||y%400==0)
        {
            printf("this student is born in leap year\n");
        }
        i++;
        
    }
}
