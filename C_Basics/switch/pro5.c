#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6,total;
    float per;
    printf("enter marks:");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    total=s1+s2+s3+s4+s5+s6;
    per=total/600.0*100.0;
    switch((int)per)
    {
        case 1 ... 39:printf("FAIL");
        break;
        case 40 ... 49:printf("THIRD DIVISION");
        break;
        case 50 ... 59:printf("SECOND DIVISION");
        break;
        case 60 ... 79:printf("FIRST DIVISION");
        break;
        default:
        printf("HONOURS");
       	break;
    }
    return 0;
}

