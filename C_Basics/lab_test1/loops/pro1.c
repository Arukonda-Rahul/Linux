#include<stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2;
    printf("enter date1:");
    scanf("%d-%d-%d",&d1,&m1,&y1);
    printf("enter date2:");
    scanf("%d-%d-%d",&d2,&m2,&y2);
    if(y1<y2)
    {
        printf("%d-%d-%d is older\n",d1,m1,y1);
    }
    else if(y1>y2)
    {
        printf("%d-%d-%d is older\n",d2,m2,y2);
    }
    else
    {
        if(m1<m2)
        {
            printf("%d-%d-%d is older\n",d1,m1,y1);
        }
        else if(m1>m2)
        {
            printf("%d-%d-%d is older\n",d2,m2,y2);
        }
        else
        {
            
            if(d1<d2)
            {
                printf("%d-%d-%d is older\n",d1,m1,y1);
            }
            else if(d1>d2)
            {
                printf("%d-%d-%d is older\n",d2,m2,y2);
            }
            else
            {
                printf("both are equal:");
            }
        }

    }
}
