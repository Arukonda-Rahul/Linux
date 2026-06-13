#include<stdio.h>
int main()
{
   char c;
   printf("enter a character:");
   scanf("%c",&c);
   if(c>='a'&&c<='z')
   {
       printf("the alphabet is:%c",c-32);
   }
   else if(c>='A'&&c<='Z')
   {
       printf("the alphabet is:%c",c+32);
   }
   else
   {
       printf("it is not an alphabet");
   }
   return 0;
}
