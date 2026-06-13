#include<stdio.h>
int main()
{
    char c;
    char d;
    printf("enter a character:");
    scanf("%c",&c);
    d=((c>='a'&&c<='z'||c>='A'&&c<='Z')?printf("alphabet"):printf("not alphabet"));
    return 0;
}
