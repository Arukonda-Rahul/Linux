#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    int a;
    a=(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z');
    switch(a)
    {
        case 1:
        if(ch>='A'&&ch<='Z')
        {
            printf("%c",ch+32);
        }
        else
        {
            printf("%c",ch-32);
        }
        break;
        case 0:printf("not an alphabet");
        break;
        default:printf("enter a valid alphabet");
        break;
    }
    return 0;
}
