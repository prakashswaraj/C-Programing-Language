
/*
    Program to implement the binary search tree all operations using linked list...
*/

#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *tree=NULL;
void insert(int );
void preorder(struct node *);
int main()
{
    int val,ch;
    do
    {
        printf("\n1.TO INSERT\n2.PREORDER TRAVERSAL\n3.TO EXIT\n");
        printf("\n enter the choice. ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter the value to be inserted: ");
            scanf("%d",&val);
            insert(val);
            break;
            case 2:
            preorder(tree);
            break;
            case 3:
            printf("default choice!!");
            break;
        }
    } while (ch!=3);
    return 0;
}
void insert(int val)
{
    struct node *ptr,*parent,*node;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->right=NULL;
    ptr->left=NULL;
    parent=tree;
    if(tree==NULL)
    {
        tree=ptr;   
    }
    else
    {
        node=tree;
        while(node!=NULL)
        {
            parent=node;
            if(val>node->data)
            node=node->right;
            else
            node=node->left;    
        }
        if(val>parent->data)
        parent->right=ptr;
        else
        parent->left=ptr;
    }
    
}
void preorder(struct node *tree)
{
    if(tree!=NULL)
    {
        printf("%d\t",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
