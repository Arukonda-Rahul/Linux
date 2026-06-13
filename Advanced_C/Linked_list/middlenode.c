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
void middlenode(struct student *head)
{
    int l=0;
    struct student *p=0,*q=0,*temp=0,*temp1=0;
    p=q=temp=temp1=head;
    while(temp)
    {
        temp=temp->next;
        l++;
    }
    while(q!=0&&q->next!=0)
    {
        p=p->next;
        q=q->next->next;
    }
    if(l%2!=0)
    {
        printf("middle node:%d\n",p->id);
    }
    else
    {
        char ch;
        printf("enter left(l) or right(r):\n");
        scanf(" %c",&ch);
        if(ch=='r')
        {
            printf("middleright:%d\n",p->id);
        }
        else if(ch=='l')
        {
            while(temp1->next!=p)
            {
                temp1=temp1->next;
            }
            printf("middle left:%d\n",temp1->id);
        }
    }
}  
int main()
{
    int o;
    struct student *head=0,*newnode=0,*temp=0;
    while(1)
    {
        printf("1)create node\n2)print\n3)middlenode\n");
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
            case 3:middlenode(head);
                break;
        }
    }
}
