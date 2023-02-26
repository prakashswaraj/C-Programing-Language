/*
    Program to implement queue using linked list ...
*/

#include<stdio.h>
#include<malloc.h>
void insert(int);
int delete();
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front;
struct queue *rear;
int main()
{
int res,option,val;
do
{
    printf("\n1.TO ISERT\n2.TO DELETE\n3.EXIT");
    printf("\n enter the option : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("enter the value to be inserted:  ");
        scanf("%d",&val);
            insert(val);
            break;
        case 2:           
            res=delete();
            printf("\n the deleted data is %d",res);
            break;
            case 3:
            printf("THE WRONG ENTRY!");
            break;
    }
}
while(option!=3);
return 0;   
}
void insert(int val)
    {
    struct queue *ptr;
    ptr=(struct queue*)malloc(sizeof(struct queue));
    //ptr=NULL;
    if(ptr==NULL)
    {
        printf("queue overflow!\n");
        return ;
    }
    ptr->data=val;
    ptr->next=NULL;
    if(rear==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=rear->next;
    }
}
    int delete()
    {
        int val;
        struct queue *temp;
        if(front==NULL)
        {
        printf("under flow");
        }
        val=front->data;
        temp=front;
        if(front==NULL)
        {
            front=NULL;
            rear=NULL;
        }
        else
        {
            front=front->next;
            free(temp);
        }
        return val;

        
    }

    


