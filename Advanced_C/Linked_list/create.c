#include<stdio.h>
#include<stdlib.h>

struct student 
{
	int id;
	char name[10];
	struct student *next;
};

struct student *createnode(void)
{
	struct student *n=0;
	n=(struct student*)malloc(sizeof(struct student));
	printf("enter ID:\n");
	scanf("%d",&n->id);
	printf("enter name:\n");
	scanf("%s",n->name);
	n->next=0;
	return n;
}

void *traverse(struct student *h)
{
	struct student *temp=0;
	temp=h;
	while(temp)
	{
		printf("ID:%d NAME:%s\n",temp->id,temp->name);
		temp=temp->next;
	}
}

int main()
{
	char ch='y';
	struct student *newnode,*temp,*head=0;
	while(ch=='y')
	{
		newnode=createnode();
		if(head==0)
		{		
			head=temp=newnode;
		}
		else
		{	
			temp->next=newnode;
		}
		temp=newnode;
		printf("do you want to continue\n");
		scanf(" %c",&ch);
	}
	traverse(head);
	return 0;
}

