#include<stdio.h>
int main()
{
    int n,d,d1,m1,m,y1,y;
    printf("enter no of students:");
    scanf("%d",&n);
    printf("enter stduent1 dob:");
    scanf("%d-%d-%d",&d,&m,&y);
    for(int i=1;i<=n;i++)
    {
        printf("enter students dob:\n");
        scanf("%d-%d-%d",&d1,&m1,&y1);
        
        if(y1>y)
        {
            y=y1;
        }
        else if(y1<y)
        {
            y=y;
        }
        else
        {
            if(m1>m)
            {
                m=m1;
            }
            else if(m1<m)
            {
                m=m;
            }
            else
            {
            
                if(d1>d)
                {
                    d=d1;
                }
                else if(d1<d)
                {
                   d=d;
                }
            }
        }

    }
    printf("the youngest student was born on:%d-%d-%d",d,m,y);
}
