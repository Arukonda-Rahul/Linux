/*
11) implement itoa function ( take an integer and store it in a string and return the string).
String can be returned as the base address of the array ( return str). The return type of function will be char *.
*/



#include <stdio.h>
char *my_itoa(int x)
{
    static char str[100];
    int i=0,l=0,y,j,t;
    while(x!=0)
    {
       y=x%10;
      *(str+i)=y+48;
       x=x/10;
	i++;
    }
    *(str+i)='\0';
    while(str[l]!='\0')
    {
        l++;
   
    }
    for(i=0,j=l-1;i<j;i++,j--)
    {
       t=*(str+i);
       *(str+i)=*(str+j);
       *(str+j)=t;
    }
    return str;
    
}
int main()
{
    int n;
    char *s;
    printf("enter number:\n");
    scanf("%d",&n);
    s=my_itoa(n);
    printf("%s",s);
    return 0;
}


