/*
i
2) read an integer number, display the number as a number name expansion.
eg., 458 : four five eight
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *p[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int n,reverse=0,remainder;
	printf("enter number\n");
	scanf("%d",&n);
	while (n != 0)
	 {
	    remainder = n % 10;
	    reverse = reverse * 10 + remainder;
            n /= 10;
  	}
	while(reverse>0)
	{
		int a=reverse%10;
		reverse=reverse/10;	
	switch(a)
	{
		case 0:printf(" %s",p[0]);
			break;
		case 1:printf(" %s",p[1]);
			break;
		case 2:printf(" %s",p[2]);
			break;
		case 3:printf(" %s",p[3]);
			break;
		case 4:printf(" %s",p[4]);
		break;	
		case 5:printf(" %s",p[5]);
		break;
		case 6:printf(" %s",p[6]);
		break;
		case 7:printf(" %s",p[7]);
		break;
		case 8:printf(" %s",p[8]);
		break;
		case 9:printf(" %s",p[9]);
		break;
		}
	}
}
