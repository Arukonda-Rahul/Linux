#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6;
    printf("enter subject marks:");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    float per;
    int total_marks=600;
    float total=(s1+s2+s3+s4+s5+s6);
    per=(total/total_marks)*100;
    if(per>=80)
    {
        printf("HONOURS:percentage is:%.6f\n",per);
    }
    else if((per>=60)&&(per<=79))
    {
        printf("FIRST DIVISION:percentage is:%.6f\n",per);
    }
    else if((per>=50)&&(per<=60))
    {
        printf("SECOND DIVISION:percentage is:%.6f\n",per);
    }
    else if((per>=40)&&(per<=49))
    {
        printf("Third Division:percentage is:%.6f\n",per);
    }
    else
    {
        printf("FAIL:percentage is:%.2f",per);
    }
    return 0;
}

