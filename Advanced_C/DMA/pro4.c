/*
4) Create a dynamic array of integers. Take input from user , sort the array and display the output.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(5*sizeof(int));
	int i;
	printf("enter elements:\n");
	for(i=0;i<5;i++)	
	{
		scanf("%d",&p[i]);
	}
	int temp=0;
	for (i = 0; i < 5 - 1; i++)
    	{ 
        	for (int j = 0; j < 4; j++) 
        	{ 
            		if (p[j] > p[j + 1])
			{
                		temp = p[j];
                		p[j] = p[j + 1];
                		p[j + 1] = temp;
			}
            	}
        }
	for(i=0;i<5;i++)
	{
		printf("%d",p[i]);
		
	}
	return 0;
}
