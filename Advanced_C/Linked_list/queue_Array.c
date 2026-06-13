#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
	int queue[N],ch,n,front=-1,rear=-1;
	while(1)
	{
		printf("1)enqueue\n2)dequeue\n3)display\n4)peek\n5)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:if(rear==N-1)
				{
					printf("queue is full\n");
				}
				else if(front==-1&&rear==-1)
				{
					printf("enter number:\n");
					scanf("%d",&n);
					front=rear=0;
					queue[rear]=n;
				}
				else
				{
					printf("enter number:\n");
					scanf("%d",&n);
					rear++;
					queue[rear]=n;
				}
				break;
			case 2:if(rear==-1&&front==-1)
				{
					printf("queue is empty\n");
				}
				else if(front==rear)
				{
					printf("dequeued:%d\n",queue[front]);
					front=rear=-1;
				}
				else
				{
					printf("dequeued:%d\n",queue[front]);
					front++;
				}
				break;
			case 3:
				if(front==-1&&rear==-1)
				{
					printf("queue is empty\n");
				}
				else
				{
					int i;
					for(i=front;i<rear+1;i++)
					{			
						printf("%d\n",queue[i]);
					}
				}
				break;
			case 4:if(front==-1&&rear==-1)
				{
					printf("queue is empty\n");
				}
				else
				{
					printf("Peek:%d\n",queue[front]);
				}
				break;
			case 5:exit(0);
		}
	}
}
