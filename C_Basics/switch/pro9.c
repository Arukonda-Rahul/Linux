#include<stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:");
    scanf("%c",&ch);
    int c=(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z');
    switch(c)
    {
        case 1:printf("alphabet");
        break;
        case 0:printf("not alphabet");
        break;
        default:printf("enter a valid alphabet");
        break;
    }
}
