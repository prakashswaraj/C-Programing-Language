
/*
    Program to implement circular linked list ...
*/

#include<stdio.h>
#include<malloc.h>
struct node 
{
    int data;
    struct node*next;
};
struct node *head=NULL;
struct node *create_CLL(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
int main()
{
    int val,option;
    do
    {
        printf("\n enter 1.to create\n2.to display\n3.to insert_beg\n4.exit");
        printf("\n enter the option");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            head=create_CLL(head);
            break;
            case 2:
            head=display(head);
            break;
            case 3:
            head=insert_beg(head);
            break;
            case 4:
            printf("default option");
            break;
        }
    } while (option!=4);
    return 0;
    
}
struct node *create_CLL(struct node *head)
{
    struct node *newnode,*ptr;
    int val;
    printf("\nenter -1 to stop");
    printf("\nenter the data:: ");
    scanf("%d",&val);
    while(val!=-1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        if(head==NULL)
        {
            newnode->next=newnode;
            head=newnode;
        }
        else
        {
            ptr=head;
            while(ptr->next!=head)
            {
                ptr=ptr->next;
            }
                ptr->next=newnode;
                newnode->next=head;   
        }
        printf("enter the data");
        scanf("%d",&val);
    }
    return head;
}
struct node *display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr->next!=head)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    return head;
}
struct node *insert_beg(struct node *head)
{
    int val;
    printf("\n enter the value to be inserted:: ");
    scanf("%d",&val);
    struct node *ptr,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=val;
    ptr=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->next=head;
    head=newnode;
    return head;
}