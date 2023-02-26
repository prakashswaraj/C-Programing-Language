
/*
    Program to implement all the operations of stack using array...
*/

#include<stdio.h>
#define max 4
int top=-1;
int st[max];
void push(int st[],int );
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main()
{
    int val=0,ch,result,res;
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
           push(st,val);
           break;
           case 2:
           result=pop(st);
           printf("\n the deleted data is %d",result);
           break;
           case 3:
           res=peek(st);
           printf("\n the peek element is %d",res);
           break;
           case 4:
           display(st);
           break;
        
            case 5:
           printf("\n the default entry!!!!");
           break;
       }
    } while (ch!=5);
    return 0;  
}
void push(int st[],int val)
{
    if(top==max-1)
    printf("\n stack overflow!!");
    else
    {
        top=top+1;
        st[top]=val;
        printf("\n the inserted value is %d",st[top]);
    }
}
int pop(int st[])
{
    int val=0;
    if(top==-1)
    printf("\n stack under flow!!");
    else
    {
        val=st[top];
        top=top-1;
    }
    return val;    
}
int peek(int st[])
{
    int val;
    if(top==-1)
    printf("\nstack underflow");
    else
    {
        val=st[top];
    }
    return val;
}
void display(int st[])
{
    int i;
    if(top==-1)
    printf("\n stack underflow!!");
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\t",st[i]);
        }
    }
}