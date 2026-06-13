/*Write a function to calculate simple interest. Call it in main function with appropriate inputs and
 print the total amount the user will get after the tenure (principle + interest)*/


#include<stdio.h>
int simpleintrest(int a,float b,float c)
{
    float si;
    si=a*b*c/100.0;
    return si;
}
int main()
{
    int p,n;
    float r,si,s,m;
    printf("enter p,n,r");
    scanf("%d%d%f",&p,&n,&r);
    m=n/12.0;
    s=simpleintrest(p,m,r);
    printf("%f",s+p);
    return 0;
}

