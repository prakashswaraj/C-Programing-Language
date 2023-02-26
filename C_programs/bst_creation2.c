

/*
     Program to implement the binary search tree all operations using linked list...
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
struct node *preorder(struct node *);
struct node *inorder(struct node *);
struct node *postorder(struct node *);
struct node *delete(struct node *,int);
int main()
{
    int val,ch,item;
    create(tree);
    do
    {
        printf("\n1.insert.\n2.preorder.\n3.inorder\n4.postorder\n5.delete\n6.exit.\n\n");
        printf("enter the choice:: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter the val to be inserted::  ");
            scanf("%d",&val);
            tree=insert(tree,val);
            break;
            case 2:
            printf("the preothe preorder order traversal is: \n\n");
            tree=preorder(tree);
            break;
            case 3:
            printf("the inorder traversal is: \n\n");
            tree=inorder(tree);
            break;
            case 4 :
            printf("the post order traversal is: \n \n");
            tree=postorder(tree);
            break;
            case 5:
            printf("\n enter the deleted element:: ");
            scanf("%d",&item);
            tree=delete(tree,item);
            printf("the deleted data is %d",tree);
            break;
            case 6:
            printf("default entry!!!");
            break;
        }

    } while (ch!=6);
    return 0;
    
}
void create(struct node *tree)
{
    tree=NULL;
}
struct node *insert(struct node *tree,int val)
{
    struct node *ptr,*node,*parent;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->right=NULL;
    ptr->left=NULL;
    if(tree==NULL)
    {
        tree=ptr;
        tree->right=NULL;
        tree->left=NULL;
    }
    else
    {
        node=tree;
        parent=NULL;
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
    return tree;
}
struct node *preorder(struct node *tree)
{
    if(tree!=NULL)
    {
    printf("%d\t",tree->data);
    preorder(tree->left);
    preorder(tree->right);
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
struct node *postorder(struct node *tree)
{
    if(tree!=NULL)
    {      
    postorder(tree->right);
     postorder(tree->left);
     printf("%d\t",tree->data);
    }
    return tree;
}
struct node *delete(struct node *tree,int item)
{
    struct node *ptr=NULL,*parent,*node;
    node=tree;
    while(node!=NULL)
    {
        if(item>node->data)
        {
            parent=node;
            node-node->right;
        }
        if(item<node->data)
        {
            parent=node;
            node=node->left;
        }
        if(item==node->data)
        {
            node=NULL;
        }
    }
    if(node==parent->right)
    {
    parent->right=NULL;
    }
    else
    {
    parent->left=NULL;
    }
    return tree;
}