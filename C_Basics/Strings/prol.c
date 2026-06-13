/*
15)" WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"  */

#include<stdio.h>
int main()
{
	char s[100];
	printf("enter String\n:");
	scanf("%s",s);
	int i=0,l=0;
	while(s[i]!='\0')
	{
		l++;
	i++;
	}
	for(i=0;i<l;i++)
	{
		switch(s[i])
		{
			case '0':printf("zero ");
			break;
			case '1':printf("one ");
			break;
			case '2':printf("two ");
			break;
			case '3':printf("three ");
			break;
			case '4':printf("four ");
			break;
			case '5':printf("five ");
			break;
			case '6':printf("six ");
			break;
			case '7':printf("seven ");	
			break;
			case '8':printf("eight ");
			break;
			case '9':printf("nine ");
			break;
		}
	}
	return 0;
		
}
