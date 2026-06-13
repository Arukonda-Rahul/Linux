#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    int arr[N],top=-1,choice;
    while(1)
    {
        printf("enter choice:\n1)push\n2)pop\n3)peek\n4)display\n5)Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:if(top==(N-1))
            {
                printf("stack is full\n");
            }
            else
            {
                top++;
                printf("enter number:\n");
                scanf("%d",&arr[top]);
            }
            break;
            case 2:if(top==-1)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("popped:%d\n",arr[top]);
                --top;
            }
            break;
            case 3:if(top==-1)
            {
                printf("stack is empty\n");
            }
            else
            {
                printf("TOP:%d\n",arr[top]);
            }
            break;
            case 4:if(top==-1)
            {
                printf("stack is empty\n");
            }
            else
            {
                for(int i=top;i>=0;i--)
                {
                    printf("%d\t",arr[i]);
                }
            }
            break;
	case 5:exit(0);
            
        }
    }
}
