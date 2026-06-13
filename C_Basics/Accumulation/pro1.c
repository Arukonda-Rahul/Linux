#include<stdio.h>
int main()
{
    int n,i,s1,s2,s3,s4,s5,s6,total=0,avg;
    printf("enter no of students:\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("enter marks:\n");
        scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
        total+=(s1+s2+s3+s4+s5+s6);
        i++;
    }
    avg=total/n;
    printf("class avg:%d\n",avg);
    return 0;
    
}
