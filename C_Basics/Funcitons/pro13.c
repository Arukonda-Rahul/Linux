/*Write a function that takes 2 dates as inputs, and returns 1 
if the first date is old, 2 if the second date is old.*/
#include<stdio.h>
int valid(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(y1<y2)
    {
        return 1;
    }
    else if(y1>y2)
    {
        return 2;
    }
    else
    {
        if(m1<m2)
        {
            return 1;
        }
        else if(m1>m2)
        {
            return 2;
        }
        else
        {
            
            if(d1<d2)
            {
                return 1;
            }
            else if(d1>d2)
            {
                return 2;
            }
        }

    }
}


int main()
{
    int d3,d4,m3,m4,y3,y4,r;
    printf("enter date1:");
    scanf("%d-%d-%d",&d3,&m3,&y3);
    printf("enter date2:");
    scanf("%d-%d-%d",&d4,&m4,&y4);
    r=valid(d3,m3,y3,d4,m4,y4);
    printf("older date is:%d",r);
}
