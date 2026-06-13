

#include <stdio.h>

int main()
{
    int m,p,c,t1,t2;
    printf("enter marks:");
    scanf("%d%d%d",&m,&p,&c);
    t1=m+p+c;
    t2=m+p;
    if(m>=60&&p>=50&&c>=40)
    {
        if(t1>=200)
        {
            printf("eligible");
        }
        else if(t2>=150)
        {
            printf("eligible");
        }
        else
        {
            printf("not eligible");
        }
    }
    else
    {
        printf("not eligible");
    }
    

    return 0;
}

