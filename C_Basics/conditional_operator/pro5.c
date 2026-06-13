#include<stdio.h>
int main()
{
    char c;
    char d;
    printf("enter a character:");
    scanf("%c",&c);
    d=((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')?printf("vowel"):printf("not vowel"));
    return 0;
}
