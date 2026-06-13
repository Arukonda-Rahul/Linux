#include<stdio.h>
int main()
{
    char c;
    printf("enter character:");
    scanf("%c",&c);
    if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
    {
        printf("Alphabet");
    }
    //else if((c>='A')&&(c<='Z'))
    //{
      //  printf("Alphabet");
    //}
    else
    {
        printf("it is not an alphabet");    
    }
    return 0;
}
