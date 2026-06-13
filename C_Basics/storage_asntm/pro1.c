/*Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file, operations.c.

1) Create the operand variables as global variables and use them in the operation functions directly,
 without passing as arguments. Function returns the result as return value.*/

#include<stdio.h>
int a,b,x,d;
int add();
int sub();
int mul();
int quo();
int remd();
int main()
{
	while(1)
	{
		printf("enter '1' to add,'2' to subtract,'3' to multiply,'4' to quotient,'5'to remainder and '0' to quit\n");
		scanf("%d",&x);
		if(x==0)
		{
			break;
		}
		else
		{
			printf("enter value of a:\n");
			scanf("%d",&a);
			printf("enter value of b:\n");
			scanf("%d",&b);
			if(x==1)
			{
				d=add();
			}
			else if(x==2)
			{
				d=sub();
			}
			else if(x==3)
			{
				d=mul();
			}
			else if(x==4)
			{	
				d=quo();
			}
			else if(x==5)
			{
				d=remd();
			}
			else if(x==0)
			{	
				break;
			}
			else
			{
				printf("enter a valid choice\n");
			}
			printf("res=%d\n",d);
		}
	}
	return 0;
}
		
			
	
	
