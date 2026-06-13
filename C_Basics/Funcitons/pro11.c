/*Write a function to accept a month and year as input, and return the number of days in that month as output
. print the number of days in main.*/



#include<stdio.h>
int day(int m,int y)
{
    if((y%100!=0&&y%4==0)||(y%400==0))
    {   
        switch(m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:return 31;
                    break;
            case 4:
            case 6:
            case 9:
            case 11:return 30;
                    break;
            case 2:return 29;
                    break;
            default:printf("enter valid month");
            break;
        }
    }
    else
    {
          switch(m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:return 31;
                    break;
            case 4:
            case 6:
            case 9:
            case 11:return 30;
                    break;
            case 2:return 28;
                    break;
            default:printf("enter valid month");
            break;
        }
    }
}
int main()
{
    int m1,y1,r;
    printf("enter month and year:");
    scanf("%d%d",&m1,&y1);
    r=day(m1,y1);
    printf("%d",r);
}
