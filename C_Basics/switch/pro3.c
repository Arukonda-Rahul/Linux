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
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("vowel");
        }
        else
        {
            printf("consonant");
        }
        break;
        case 0:printf("not an alphabet");
        break;
        default:printf("enter a valid alphabet");
        break;
    }
    return 0;
}
