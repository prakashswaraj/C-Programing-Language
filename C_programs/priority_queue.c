
/*
    Program to implement all the operations of priority queue...

*/

#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
    int priority;
    struct node *next;
};
struct node *head=NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);
int main()
{
    int ch;
    do
    {
        printf("\n1.to insert\n2.to delete\n3.display\n4.exit");
        printf("\n enter the option:: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            head=insert(head);
            break;
            case 2:
            head=delete(head);
            break;
            case 3:
            display(head);
            break;
            case 4:
            printf("\n exit");
            break;
        }
    } while (ch!=4);
    return 0;
}
struct node *insert(struct node *head)
{
    int val,prio;
    printf("\neter the data and priority:: ");
    scanf("\t%d%d",&val,&prio);
    struct node *newnode,*p;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->priority=prio;
    if(head==NULL||head->priority>prio)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        p=head;
        while(p->next!=NULL&&p->next->priority<=prio)
        p=p->next;
        newnode->next=p->next;
        p->next=newnode;
    }
    return head;
}
struct node* delete(struct node *head)
{
    int val;
    struct node *ptr;
    if(head==NULL)
    printf("\nunderflow\n");
    else
    {
        ptr=head;
        printf("\n the deleted data is %d",ptr->data);
        head=head->next;
        free(ptr);
    }
    return head;
}
void display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    printf("\n underflow");
    else
    {   
        while(ptr!=NULL)
        {
            printf("\t%d__%d",ptr->data,ptr->priority);
            ptr=ptr->next;
        }

    }
}