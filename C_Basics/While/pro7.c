#include<stdio.h>
int main()
{
    int n,i;
    char ch;
    printf("enter range:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("enter character:");
        scanf(" %c",&ch);
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            printf("%c is an alphabet\n",ch);
        }
        else
        {
            printf("%c is not an alphabet\n",ch);
        }
        i++;
    }
    return 0;
}
