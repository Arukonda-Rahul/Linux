/*

1   Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727

note: when giving * in commandline, always give "*"
*/


#include<stdio.h>
#include<string.h>
int atoi(char *);
int main(int argc,char* argv[])
{
	int a=atoi(argv[1]);
	int b=atoi(argv[3]);
	char c=*argv[2];
	switch(c)
	{
		case '+':printf("%d+%d=%d",a,b,a+b);
		break;
		case '-':printf("%d-%d=%d",a,b,a-b);
		break;
		case '*':printf("%d*%d=%d",a,b,a*b);
		break;
		case '/':printf("%d/%d=%d",a,b,a/b);
		break;
		case '%':printf("%d%%%d=%d",a,b,a%b);
		break;
	}
	return 0;	
}
