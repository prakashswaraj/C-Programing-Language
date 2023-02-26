
/*
    Program to implement circular array...
*/


#include<stdio.h>
#include<stdlib.h>
void insert(int);
int delete();
int front=-1;
int rear=-1;
#define max 10
int q[max];
int main()
    {
        int val,ch,res;
        do{
            printf("\n1.INSERT\n2.DELETE\n3.EXIT");
            printf("\n enter the choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                printf("\n enter the value to insert: ");
                scanf("%d",&val);
                insert(val);
                break;
                case 2:
                res=delete();
                printf("\n the deleted data is %d",res);
                break;
                case 3:
                printf("\n THE DEFAULT ENTRY!!!");
                break;

            }
        }
        while (ch!=3);
        return 0;
        
    }
    void insert(int val)
    {
        if(front==-1&&rear==-1)
        {
            front=rear=NULL;
            q[rear]=val;
        }
        else if((rear+1)%max==front)
        {
            printf("\n queue is full");
        }
        else
        {
            rear=(rear+1)%max;
            q[rear]=val;
        }
    }
    int delete()
    {
        int val;
        if(front==-1&&rear==-1)
        {
            printf("\n queue is underflow");
        }
        val=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%max;
        }
        return val;
    }



