#include<stdio.h>
void reverse(char *s,int l)
{
    if(l==0)
    {
        return ;
    }
    else
    {
        printf("%c",s[l-1]);
        reverse(s,l-1);
    }
}
int main()
{
    char s[]="hello";
    int l=0;
    while(s[l])
    {
        l++;
    }
    reverse(s,l);
}
