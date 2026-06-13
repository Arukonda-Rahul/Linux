/*Write the calculator program with the functions distributed in 3 different files as shown below, 
compile and execute it. the main function should take inputs from user in a loop, as long as user wants to execute the calculator functionality.

main function in main.c 

add and subtract functions in add.c 

mul, div ,remainder functions in mul.c  */

#include<stdio.h>
int add(int a,int b,char ch);
int mul(int a,int b,char ch);
int main()
{
    int a,b,res;
    char ch,ch1='y';
    while(1)
    {
        printf("operator:\n");
        scanf(" %c",&ch);
        printf("enter values of a and b:\n");
        scanf("%d%d",&a,&b);
        if(ch=='+'||ch=='-')
        {
            res=add(a,b,ch);
        }
        else if(ch=='*'||ch=='/'||ch=='%')
        {
            res=mul(a,b,ch);
        }
        else
        {
            printf("enter valid operator\n");
        }
	printf("res:%d",res);
        printf("enter 'y' to break and any key to continue\n");
	scanf(" %c",&ch);
        if(ch==ch1)
        {
            break;
        }
    }
    return 0;
}
