

/*
    Program to implement the DEqueue...
*/

#include<stdio.h>
#define max 10
int q[max];
int f=-1;
int r=-1;
int insert_front(int);
int insert_rear(int);
int delete_front();
int delete_rear();
int main()
{
    int ch,val,res,del;
    do
    {
       printf("\n 1.INSERT FRONT\n2.INSERT REAR\n3.DELETE FRONT\n4.DELETE REAR\n5.EXIT");
       printf("\nENTER THE CHOICE!: ");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:
           printf("\nenter the value to be inserted: ");
           scanf("%d",&val);
           res=insert_front(val);
           printf("\n the inserted value is %d",res);
           break;
           case 2:
           printf("\n enter the value to be inserted at rear: ");
           scanf("%d",&val);
           res=insert_rear(val);
           printf("\n the inserted value is %d",res);
           break;
           case 3:
           del=delete_front();
           printf("the deleted data is %d",del);
           break;
           case 4:
           del=delete_rear();
           printf(" the deleted data is %d",del);
           break;
           case 5:
           printf("THE DEFAULT ENTRY!!");
           break;
       } 
    } while (ch!=5);
    return 0;
    
}
int insert_front(int val)
{
    if(f==NULL&&r==max-1||f==(r-1))
    {
        printf("\n queue is full");
    }
    else if(f==-1&&r==-1)
    {
        f=r=NULL;
        q[f]=val;
    }
    else if(f==NULL)
    {
    f=max-1;
    q[f]=val;
    }
    else 
    {
        f--;
        q[f]=val;
    }
    return q[f];
}
insert_rear(int val)
{
    if(f==NULL&&r==max-1||f==r-1)
    {
        printf("\n the queue is full");
    }
    else if(r=max-1&&f!=NULL)
    {
        r=NULL;
        q[r]=val;
    }
    else
    {
        r++;
        q[r]=val;
    }
    return q[r];
}
