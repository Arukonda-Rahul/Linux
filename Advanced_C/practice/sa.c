#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int id;
    struct student *next;
};
int main()
{
	int choice;
	struct student *rear=0,*front=0,*newnode=0;
	while(1)
	{
	printf("1)enqueue\n2)dequeue\n3)peek\n4)display\n");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:newnode=(struct student*)malloc(sizeof(struct student));
	    printf("enter id:\n");
	    scanf("%d",&newnode->id);
	    newnode->next=0;
	    if(front==0&&rear==0)
	    {
	        front=rear=newnode;
	    }
	    else
	    {
	        rear->next=newnode;
	    }
	    rear=newnode;
	    break;
	    case 2:if(rear==0&&front==0)
	    {
	        printf("queue is empty\n");
	    }
	    else if(front==rear)
	    {
	        struct student *temp=front;
	        printf("popped:%d\n",temp->id);
	        free(temp);  
	        front=rear=0;
	    }
	    else
	    {
	        struct student *temp=front;
	        printf("popped:%d\n",temp->id);
	        front=front->next;
	        free(temp);
	    }
	    break;
	    case 3:if(front==0&&rear==0)
	    {
	        printf("queue is empty\n");
	    }
	    else
	    {
	        printf("top:%d\n",rear->id);
	    }
	    break;
	    case 4:if(front==0&&rear==0)
	    {
	        printf("queue is empty\n");
	    }
	    else
	    {
	        struct student *temp=front;
	        while(temp)
	        {
	            printf("%d\n",temp->id);
	            temp=temp->next;
	        }
	        
	    }
	    break;
	}
}
	return 0;
}

