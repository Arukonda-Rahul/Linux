/*
1)Create a character pointer array, initialise the pointers to read only strings. Sort the array and print.
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char *temp;
	char *p[12]={"january","february","march","april","may","june","july","august","september","october","november","december"};
	for(int i=0;i<12;i++)
	{
		for(int j=i+1;j<12;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=0;i<12;i++)
	{
		printf("%s\n",p[i]);
	}
	return 0;
}
