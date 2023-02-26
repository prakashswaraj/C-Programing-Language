
/*
     Program to implement all the operations of stack using linked list...
*/

#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node* push(struct node *,int);
struct node *pop(struct node *);
int peek(struct node *);
struct node *display(struct node *);
int main()
{
    int ch,val,result,res;
    do
    {
        printf("\n1.TO PUSH\n2.TO POP\n3.TO PEEK\n4.TO DISPLAY\n5.TO EXIT\n");
       printf("\n ENTER THE CHOICE!!");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           printf("\n enter the value to be inserted: ");
           scanf("%d",&val);
           top=push(top,val);
           break;
           case 2:
           top=pop(top);
           break;
           case 3:
           res=peek(top);
           printf("\nthe top data is %d",res);
           break;
           case 4:
          top= display(top);
           break;
            case 5:
           printf("\n the default entry!!!!");
           break;
       }
    } while (ch!=5);
    return 0;    
}
struct node * push(struct node *top,int val)
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    if(top==NULL)
    {
    ptr->next=NULL;
    top=ptr;
    }
    else
    {
        ptr->next=top;
        top=ptr;
    }
    return top;
}
struct node *pop(struct node *top)
{
    struct node *ptr; 
    ptr=top;
    if(top==NULL)
    printf("\n stack underflow!!");
    else
    {   
        top=top->next;
        printf("\n the deleted data is %d",ptr->data);
        free(ptr);
    }
    return top;
}
int peek(struct node *top)
{
    if(top==NULL)
    printf("\nstack under flow!!");
    else
    {
        return top->data;
    }
    
}
struct node *display(struct node *top)
{
    struct node *ptr;
    ptr=top;
    if(top==NULL)
    printf("\n stack under flow!!");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
    return top;
}