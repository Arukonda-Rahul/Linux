#include<stdio.h>
int main()
{
    char m[100],s[10];;
    printf("enter main string:\n");
    scanf("%[^\n]s",m);
    printf("enter substring:\n");
    scanf("%s",s);
    int i,j,l=0;
    while(s[l]!='\0')
    {
        l++;
    }
    for(i=j=0;m[i];i++)
    {
        if(m[i]==s[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
        if(s[j]=='\0')
        {
            printf("substring found at:%d\n",i-l+1);
        }
    }
}
