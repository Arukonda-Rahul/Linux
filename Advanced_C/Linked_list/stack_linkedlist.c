#include<stdio.h>
#include<stdlib.h>

struct student
{
	int id;
	struct student *next;
};

int main()
{
	int ch,n;
	struct student *top=0,*newnode=0;
	while(1)
	{
		printf("enter 1)push\n2)pop\n3)peek\n4)display\n5)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			newnode=(struct student*)malloc(sizeof(struct student));
			printf("enter no to push:\n");
			scanf("%d",&n);
			newnode->id=n;
			newnode->next=top;
			top=newnode;
			break;
			case 2:if(top==0)
				{
					printf("stack is empty\n");
				}
				else
				{
					struct student *temp=0;
					temp=top;
					printf("popped:%d\n",top->id);
					top=top->next;
					free(temp);
				}
				break;
			case 3:if(top==0)
				{
					printf("stack is empty\n");
				}
				else
				{
					printf("Top element:%d\n",top->id);
				}
				break;
			case 4:if(top==0)
				{
					printf("stack is empty\n");
				}
				else
				{
					struct student *temp=0;
					temp=top;
					while(temp)
					{
						printf("%d\n",temp->id);
						temp=temp->next;
					}
				}
				break;
			case 5:exit(0);
				break;
		}	
	}
}

