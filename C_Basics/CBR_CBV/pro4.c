/*4)
4 Write a function that can take two integers as input, and gives 5 outputs : 
addition, subtraction, multiplication, quotient and reminder of those two numbers. 
Print the outputs in the main function.
*/

#include<stdio.h>
int *add,*sub,*mul,*divi,*quo;
void operation(int a,int b)
{
    int x1,x2,x3,x4,x5;
    x1=a+b;
    add=&x1;
    x2=a-b;
    sub=&x2;
    x3=a*b;
    mul=&x3;
    x4=a/b;
    divi=&x4;
    x5=a%b;
    quo=&x5;
    
}
int main()
{
    int a,b;
    printf("enter two values:\n");
    scanf("%d%d",&a,&b);
    operation(a,b);
    printf("addition is:%d\n",*add);
    printf("subtraction is:%d\n",*sub);
    printf("multiplication is:%d\n",*mul);
    printf("division is:%d\n",*divi);
    printf("remainder is:%d\n",*quo);
    
}
