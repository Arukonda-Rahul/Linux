/*2) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. 
Function return value should be stored in another global variable in operations file and be used to print in main.*/

#include<stdio.h>
int a,b,x,d;
extern int res;
void add();
void sub();
void mul();
void quo();
void remd();
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
				add();
			}
			else if(x==2)
			{
				sub();
			}
			else if(x==3)
			{
				mul();
			}
			else if(x==4)
			{	
				quo();
			}
			else if(x==5)
			{
				remd();
			}
			else if(x==0)
			{	
				break;
			}
			else
			{
				printf("enter a valid choice\n");
			}
			printf("res=%d\n",res);
		}
	}
	return 0;
}

