#include <stdio.h>
#include<stdlib.h>

struct student
{
    int id;
    struct student *next;
};
struct student *createnode(void)
{
    struct student *n=0;
    n=(struct student*)malloc(sizeof(struct student));
    printf("enter ID:\n");
    scanf("%d",&n->id);
    n->next=0;
    return n;
}


void traverse(struct student *head)
{
    struct student *temp=head;
    while(temp)
    {
        printf("ID:%d\n",temp->id);
        temp=temp->next;
    }
}

void *reverse(struct student *h)
{
    struct student *prevnode,*nextnode,*currentnode;
    prevnode=0;
    currentnode=nextnode=h;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    h=prevnode;
    return h;
}

int main()
{
    int o;
    struct student *head=0,*newnode=0,*temp=0;
    while(1)
    {
        printf("1)create node\n2)print\n3)reverse\n");
        scanf("%d",&o);
        switch(o)
        {
            case 1:newnode=createnode();
                    if(head==0)
                    {
                        head=temp=newnode;
                    }
                    else
                    {
                        temp->next=newnode;
                    }
                    temp=newnode;
                    break;
            case 2:traverse(head);
                break;
            case 3:head=reverse(head);
                break;
        }
    }
}
