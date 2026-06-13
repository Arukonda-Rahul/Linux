#include <stdio.h>  
#include<stdlib.h>   
struct node
{  
    int id;  
    struct node *next;  
};      
   
struct node *head, *tail = NULL;  
   
void addNode(void) 
{  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
	printf("enter id:\n");
    scanf("%d",&newNode->id);  
    newNode->next = NULL;  
      
    if(head == NULL)
    {  
        head = newNode;  
        tail = newNode;  
    }  
    else {  
        tail->next = newNode;  
        tail = newNode;  
    }  
}     
void sortList()
{  
        struct node *current = head, *index = NULL;  
        int temp;  
          
        if(head == NULL)
        {  
            return;  
        }  
        else
	{  
            while(current != NULL)
            {  
                index = current->next;  
                  
                while(index != NULL)
                {  
                    if(current->id > index->id)
                    {  
                        temp = current->id;  
                        current->id = index->id;  
                        index->id = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }      
       }  
}  
   
void display()
{  
    struct node *current = head;  
    if(head == NULL)
    {  
        printf("List is empty \n");  
        return;  
    }  
    while(current != NULL) 
    {  
        printf("%d ", current->id);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
	int choice;
	while(1)
	{
		printf("1)create node\n2)print\n");
		scanf("%d",&choice);
		switch(choice)
		{
    		case 1:addNode(); 
			break; 
      		case 2:sortList();  
		printf("Sorted list: \n");  
    			display();  
			break;
		}
	}
          
    return 0;  
}  
