#include<stdio.h>
#include<stdlib.h>
struct student 
{
    int id;
    struct student *next;
};
int main()
{
    struct student *newnode=0,*front=0,*rear=0;
    int choice;
    while(1)
    {
        printf("enter choice:\n1)enqueue\n2)dequeue\n3)peek\n4)display\n5)exit\n");
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
            case 2:if(front==0&&rear==0)
            {
                printf("queue is empty\n");
            }
            else if(front==rear)
            {
                 printf("dequeued:%d\n",front->id);
                 free(front);
                 front=rear=0;
            }
            else
            {
                struct student *temp=front;
                printf("dequeued:%d\n",temp->id);
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
                printf("top:%d",rear->id);
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
            case 5:exit(0);
        }
    }
}
