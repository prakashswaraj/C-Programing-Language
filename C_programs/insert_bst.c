
/*
        Program to perform insertion , deletion and inorder traveral in binary search tree...

*/

#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *tree;
void create(struct node *);
struct node *insert(struct node *,int);
struct node *inorder(struct node *);
struct node *delete(struct node *,int);
int main()
{
    int val,item,ch,res;
    create(tree);
    do
    {
        printf("\n1.INSERT\n2.INORDER\n3.DELETE\n4.EXIT\n");
        printf("\n ENTER THE CHOICE!!");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter the value to be inserted:: ");
            scanf("%d",&item);
            tree=insert(tree,item);
            break;
            case 2:
            printf("\n the inorder traversal is \n\n");
            tree=inorder(tree);
            break;
            case 3:
            printf("\n enter the elelment to be delete:: ");
            scanf("%d",&val);
           tree=delete(tree,val);
            break;
            case 4:
            printf("EXIT!!");
            break;
        }
    } while (ch!=4);
    return 0;
}
void create(struct node *tree)
{
    tree=NULL;
}
struct node *insert(struct node *tree,int item)
{
    struct node *ptr,*parent,*node;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->left=NULL;
    ptr->right=NULL;
    if(tree==NULL)
    {
    tree=ptr;
    tree->right=NULL;
    tree->left=NULL;
    }
    else
    {
     parent=NULL;
    node=tree; 
    while(node!=NULL)
    {
        parent=node;
        if(item>node->data)
        node=node->right;
        else
        node=node->left;
    }
    if(item=parent->data)
    printf("duplicate is not allowed!!");
    else if(item>parent->data)
    parent->right=ptr;
    else
    parent->left=ptr;
    }
    return tree;
}
struct node *inorder(struct node *tree)
{
    if(tree!=NULL)
    {
        inorder(tree->left);
        printf("%d\t",tree->data);
        inorder(tree->right);
    }
    return tree;
}
struct node *delete(struct node *tree,int val)
{
    struct node *node,*parent;
    node=tree;
    while(node!=NULL)
    {
        if(val>node->data)
        {
            parent=node;
            node=node->right;
        }
        if(val<node->data)
        {
            parent=node;
            node=node->left;
        }
        if(val==node->data)
        {
            node=NULL;
        }
    }
    if(node==parent->right)
    {
        parent->right=NULL;
        free(node);
    }
    else
    {
    parent->left=NULL;
    free(node);
    }
    return tree;
}