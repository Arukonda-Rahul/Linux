/*
14. WAP Swap any two numbers using bitwise operators. How does it work?
*/
#include <stdio.h>

void swapNumbers(int a, int b) 
{
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
}
int main() 
{
    int num1,num2;
    printf("enter num1 and num2:\n");
    scanf("%d%d",&num1,&num2);
    swapNumbers(num1, num2);
    return 0;
}

