/*Write a function that takes an integer number as input and prints its multiplication table.return type is  void*/


#include <stdio.h>
void printMultiplicationTable(int number)
{
    int i;
    for (i=1;i<=10;i++) 
    {
        printf("%d*%d=%d\n",number,i,number*i);
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printMultiplicationTable(num);
    return 0;
}

