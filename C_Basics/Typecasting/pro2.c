#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6;
    printf("enter marks:");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    int tm=600.0;
    float per=(s1+s2+s3+s4+s5+s6)/600.0*100;
    printf("%.2f",per);
    return 0;
}
