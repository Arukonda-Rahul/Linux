/*Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
*/


#include<stdio.h>
int isLeap(int y)
{
    if((y%100!=0&&y%4==0)||(y%400==0))
    {   
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,r;
    printf("enter year:");
    scanf("%d",&n);
    r=isLeap(n);
    printf("%d",r);
}
