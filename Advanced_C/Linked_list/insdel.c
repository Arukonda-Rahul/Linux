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
void length(struct student *head)
{
    int len=0;
    
    struct student *temp=head;
    while(temp)
    {
        temp=temp->next;
        len++;
    }
    printf("length:%d\n",len);
}

int main() 
{
    struct student *head=0,*temp=0,*newnode=0,*temp1=0,*temp2=0,*temp3=0,*temp4=0,*temp5=0,*temp6=0,*temp7=0,*temp8=0,*temp9=0,*temp10=0,*temp11=0,*temp12=0;
    int o,pos,key;
    while(1)
    {
        printf("enter 1)create\n2)print\n3)length\n4)insert before pos\n5)insert after pos\n6)insert at pos\n7)insert before key\n8)insert after key\n9)insert at key\n10)del before key\n11)del at key\n12)del after key\n13)del at pos\n14)del before pos\n15)del after pos\n16)exit\n");
        scanf("%d",&o);
        switch(o)
        {
            case 1: newnode=createnode();
             if(head==0)
            {
                 head=newnode;
            }
            else
            {
                temp->next=newnode;
            }
            temp=newnode;
             break;
            case 2:traverse(head);
                 break;
            case 3:length(head);
                    break;
            case 4:printf("enter position:\n");
                scanf("%d",&pos);
                temp1=head;
                if(pos==1)
                {
                    newnode=createnode();
                    newnode->next=head;
                    head=newnode;
                    
                }
                else
                {
                    newnode=createnode();
                    int i=1;
                    while(i<pos-1)
                    {
                        temp1=temp1->next;
                        i++;
                    }
                    newnode->next=temp1->next;
                    temp1->next=newnode;
                }
            break;
            case 5:printf("enter pos:\n");
                scanf("%d",&pos);
                temp2=head;
                if(pos==1)
                {
                    newnode=createnode();
                    newnode->next=temp2->next;
                    temp2->next=newnode;
                }
                else
                {
                    int j=1;
                    newnode=createnode();
                    while(j<pos)
                    {
                        temp2=temp2->next;
                        j++;
                    }
                    newnode->next=temp2->next;
                    temp2->next=newnode;
                }
            break;
            case 6:printf("enter pos:\n");
                    scanf("%d",&pos);
                    temp3=head;
                    if(pos==1)
                    {
                        newnode=createnode();
                        newnode->next=temp3;
                        head=newnode;
                    }
                    else
                    {
                        int l=1;
                        while(l<pos-1)
                        {
                            temp3=temp3->next;
                            l++;
                        }
                        newnode=createnode();
                        newnode->next=temp3->next;
                        temp3->next=newnode;
                    }
                    break;
            case 7:printf("enter key:\n");
                    scanf("%d",&key);
                    temp4=head;
                    if(key==head->id)
                    {
                        newnode=createnode();
                        newnode->next=head;
                        head=newnode;
                    }
                    else
                    {
                        struct student *s=head;
                        s=temp4->next;
                        while(key!=s->id)
                        {
                            temp4=temp4->next;
                            s=s->next;
                        }
                        newnode=createnode();
                        newnode->next=temp4->next;
                        temp4->next=newnode;
                    }
                    break;
            case 8:printf("enter key:\n");
                    scanf("%d",&key);
                    temp5=head;
                    if(key==head->id)
                    {
                        newnode=createnode();
                        newnode->next=head->next;
                        head->next=newnode;
                    }
                    else
                    {
                        struct student *s=head;
                        s=temp5->next;
                        while(key!=s->id)
                        {
                            temp5=temp5->next;
                            s=s->next;
                        }
                        newnode=createnode();
                        newnode->next=s->next;
                        s->next=newnode;
                    }
                    break;
            case 9:printf("enter key:\n");
                    scanf("%d",&key);
                    temp6=head;
                    if(key==head->id)
                    {
                        newnode=createnode();
                        newnode->next=head;
                        head=newnode;
                    }
                    else
                    {
                        struct student *s=0;
                        s=head;
                        s=head->next;
                        while(s->id!=key)
                        {
                            s=s->next;
                            temp6=temp6->next;
                        }
                        newnode=createnode();
                        newnode->next=temp6->next;
                        temp6->next=newnode;
                    }
                    break;
            case 10:printf("enter key:\n");
                    scanf("%d",&key);
                    temp8=head;
                    if(key==head->id)
                    {
                        printf("no node found before head\n");
                    }
                    else
                    {
                        struct student *s=0,*b=0;
                        s=b=head;
                        int l=0,i=1;
                        while(s->id!=key)
                        {
                            l++;
                            s=s->next;
                        }
                        while(i<l-1)
                        {
                            temp8=temp8->next;
                            i++;
                        }
                        b=temp8->next;
                        temp8->next=b->next;
                        free(b);
                    }
                    break;
            case 11:printf("enter key:\n");
                    scanf("%d",&key);
                    temp8=head;
                    if(key==head->id)
                    {
                        struct student *s=0;
                        s=head;
                        head=s->next;
                        free(s);
                    }
                    else
                    {
                        struct student *s=0;
                        s=head;
                        s=s->next;
                        while(s->id!=key)
                        {
                            s=s->next;
                            temp8=temp8->next;
                        }
                        temp8->next=s->next;
                        free(s);
                    }
                    break;
            case 12:printf("enter key:\n");
                    scanf("%d",&key);
                    temp9=head;
                    if(key==head->id)
                    {
                        struct student *s=0;
                        s=head;
                        s=s->next;
                        temp9->next=s->next;
                        free(s);
                    }
                    else
                    { 
                        int len=0;
                        while(temp9)
                        {
                            temp9=temp9->next;
                            len++;
                        }
                        temp9=head;
                     struct student *s=0,*b=0;
                        s=b=head;
                        int l=1,i=1;
                        b=b->next;
                        while(s->id!=key)
                        {
                            l++;
                            s=s->next;
                            b=b->next;
                        }
                        if(l==len)
                        {
                            printf("this is last node\n");
                        }
                        else
                        {
                            s->next=b->next;
                            free(b);
                        }
                    }
                    break;
            case 13:printf("enter pos:\n");
                    scanf("%d",&pos);
                    temp10=head;
                    if(pos==1)
                    {
                        head=temp10->next;
                        free(temp10);
                    }
                    else
                    {
                        struct student *s=0;
                        s=head;
                        int i=1;
                        s=s->next;
                        while(i<pos-1)
                        {
                            temp10=temp10->next;
                            s=s->next;
                            i++;
                        }
                        temp10->next=s->next;
                        free(s);
                    }
                    break;
            case 14:printf("enter pos:\n");
                    scanf("%d",&pos);
                    temp11=head;
                    if(pos==1)
                    {
                        printf("this is first node\n");
                    }
                    else
                    {
                        struct student *s=0,*b=0;
                        s=b=head;
                        int l=0,i=1;
                        while(i!=pos)
                        {
                            l++;
                            s=s->next;
                            i++;
                        }
                        i=1;
                        while(i<l-1)
                        {
                            temp11=temp11->next;
                            i++;
                        }
                        b=temp11->next;
                        temp11->next=b->next;
                        free(b);
                    }
                    break;
            case 15:printf("enter pos:\n");
                    scanf("%d",&pos);
                    temp12=head;
                    int len=0;
                    while(temp12)
                    {
                        temp12=temp12->next;
                        len++;
                    }
                    temp9=head;
                    if(pos==len)
                    {
                        printf("this is last node\n");
                    }
                    else
                    {
                        int len=0;
                        while(temp9)
                        {
                            temp9=temp9->next;
                            len++;
                        }
                        temp9=head;
                     struct student *s=0,*b=0;
                        s=b=head;
                        int l=1,i=1;
                        b=b->next;
                        while(i!=pos)
                        {
                            l++;
                            i++;
                            s=s->next;
                            b=b->next;
                        }
                        if(l==len)
                        {
                            printf("this is last node\n");
                        }
                        else
                        {
                            s->next=b->next;
                            free(b);
                        }
                    }
                    break;
            case 16:exit(0);
                break;
        }
    }
    return 0;
}

