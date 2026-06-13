/*
5) Implement itoa function and return the string from the function. 
Print the result in main. itoa function takes an integer as input, and stores the integer in a string.
*/
#include<stdio.h>
#include<stdlib.h>
char *my_itoa(int x)
{
	char *str;
	str=(char*)malloc(10*sizeof(char));
	if(str==NULL)
	{
		printf("memory allocation failed\n");
		return NULL;
	}
	else
	{
		int i=0,l=0,y,j,t;
		while(x!=0)
		{
			y=x%10;
			*(str+i)=y+48;
			x=x/10;
			i++;
		}
		*(str+i)='\0';
		while(str[l]!='\0')
		{
			l++;
		}
		for(i=0,j=l-1;i<j;i++,j--)
		{
			t=*(str+i);
			*(str+i)=*(str+j);
			*(str+j)=t;
		}
		return str;
	}	

}
int main()
{
	int n;
	char *s;
	s=(char*)malloc(sizeof(char));
	printf("enter number\n");
	scanf("%d",&n);
	if(s==NULL)
	{
		printf("memory allocation failed\n");
	}
	else
	{
		s=my_itoa(n);
		printf("%s",s);
		free(s);
	}
	return 0;
}
	
		
