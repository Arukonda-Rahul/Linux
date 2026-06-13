/*Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%   */


#include <stdio.h>
int add (int a, int b)
{
    return a+b;
}
int sub (int a,int b)
{
    return a-b;
}
int mul(int a, int b)
{
    return a*b;
}
int quotient(int a, int b)
{
    return a/b;
}
int remaindr(int a,int b)
{
    return a%b;
}

int main() 
{
    int c,d,res;
    char ch;
    printf("enter two numbers:");
    scanf("%d%d",&c,&d);
    printf("enter opetaror");
    scanf(" %c",&ch);
    switch(ch)
    {
       case '+':res=add(c,d);
       printf("result is:%d",res);
       break;
       case '-':res=sub(c,d);
       printf("result is:%d",res);
       break;
       case '*':res=mul(c,d);
       printf("result is:%d",res);
       break;
       case '/':res=quotient(c,d);
       printf("result is:%d",res);
       break;
       case '%':res=remaindr(c,d);
       printf("result is:%d",res);
       break;
    }
    return 0;
}

