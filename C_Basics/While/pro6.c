#include<stdio.h>
int main()
{
    int n,s1,s2,s3,s4,s5,s6,total;
    float per;
    printf("enter no of students:");
    scanf("%d",&n);
    total=600;
    int i=1;
    while(i<=n)
    {
        printf("enter marks:");
        scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
        per=(s1+s2+s3+s4+s5+s6)/600.0*100.0;
        printf("percentage is:%f\n",per);
        if(per<=39)
        {
            printf("fail\n");
        }
        else if(per<=49)
        {
            printf("third division\n");
        }
        else if(per<=59)
        {
            printf("second division\n");
        }
        else if(per<=79)
        {
            printf("first division\n");
        }
        else
        {
            printf("honours\n");
        }
        i++;
        
        
    }
return 0;
    
}
