#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6,total,x,pass,c1=0,c2=0,c3=0,c4=0,c5=0;
    printf("enter total marks:\n");
    scanf("%d",&total);
    printf("enter pass mark of one subject:\n");
    scanf("%d",&pass);
    float per;
    while(1)
    {
        printf("enter subject marks:\n");
        scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
        if(s1>=pass&&s2>=pass&&s3>=pass&&s4>=pass&&s5>=pass&&s6>=pass)
        {
            per=(s1+s2+s3+s4+s5+s6)/(float)total*100.0;
            printf("percentage is:%f\n",per);
            if(per>65)
            {
                printf("Distinction\n");
                c1++;
            }
            else if(per>60)
            {
                printf("First class\n");
                c2++;
            }
            else if(per>50)
            {
                printf("Second class\n");
                c3++;
            }
            else if(per>35)
            {
                printf("Third class\n");
                c4++;
            }
            else
            {
                printf("fail\n");
                c5++;
            }
        }
        else
        {
            printf("failed in one subject\n");
            c5++;
        }
        printf("TO continue:enter 1\nTO break:enter 0\n");
        scanf("%d",&x);
        if(x==0)
        {   
            break;
        }
        else
        {
            continue;
        }
    }
    printf("No of students passed in distinction:%d\n",c1);
    printf("No of students passed in first class:%d\n",c2);
    printf("No of students passed in second class:%d\n",c3);
    printf("No of students passed in third class:%d\n",c4);
    printf("No of students failed:%d\n",c5);
    
    return 0;
}
