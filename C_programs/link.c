
/*
     Program to insert the element at beginning of the linked list ...
*/

#include<stdio.h>
#include<malloc.h>
struct node
{
    struct node*next;
    int data;
};
struct node* insert_beg(struct node*head,int data)
{
   struct node *newnode,*ptr;
   int n,i;
   head=NULL;
   for(i=0;i<n;i++)
   {
       newnode = (struct node*)malloc(sizeof(struct node));
       scanf("%d",&data);
       newnode->data=data;
       if(head == NULL)
       {
           head=newnode;
           newnode->next=NULL;
       }
       else
       {
           ptr=head;
           ptr->next=newnode;
           newnode->next=NULL;
           ptr=ptr->next;
       }
   }
   return head;
}
int main()
{
    struct node*head,*ptr;
    int data;
    head = insert_beg(head,data);
    ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
