		/*					STRCMP     			*/





#include<stdio.h>
int mystrcmp(char *s1,char *s2)
{
    int flag=0,i=0;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(*(s1+i)!=*(s2+i))
        {
            if(*(s1+i)>*(s2+i))
            {
                return 1;
                break;
            }
            else
            {
                return -1;
                break;
            }
        }
     }
         return 0;
}
int main()
{
    char s1[100],s2[100];
    printf("enter string1:\n");
    scanf("%s",s1);
    printf("enter string2\n");
    scanf("%s",s2);
    int r=mystrcmp(s1,s2);
    printf("%d\n",r);
    return 0;
    
}	
