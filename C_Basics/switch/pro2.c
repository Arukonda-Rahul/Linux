#include<stdio.h>
int main()
{
    int y,m,d;
    printf("enter date-month-year:");
    scanf("%d-%d-%d",&d,&m,&y);
    if(d==1||d==21||d==31)
    {
        printf("%dst",d);
    }
    else if(d==2||d==22)
    {
        printf("%d2nd",d);
    }
    else if(d==3||d==23)
    {
        printf("%drd",d);
    }
    else
    {
        printf("%dth",d);
    }
    switch(m)
    {
        case 1:printf("January %d",y);
        break;
        case 2:printf("February %d",y);
        break;
        case 3:printf("March %d",y);
        break;
        case 4:printf("April %d",y);
        break;
        case 5:printf("May %d",y);
        break;
        case 6:printf("June%d",y);
        break;
        case 7:printf("July %d",y);
        break;
        case 8:printf("August %d",y);
        break;
        case 9:printf("September %d",y);
        break;
        case 10:printf("October %d",y);
        break;
        case 11:printf("November %d",y);
        break;
        case 12:printf("December %d",y);
        break;
        default:printf("enter a valid month");
        break;
        
    }
    
}
