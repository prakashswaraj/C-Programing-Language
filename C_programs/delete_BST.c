
/*
    Program to perform insertion , preorder and deletion operation in binary search tree...
*/

#include<stdio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
    struct node *prev;
};
struct node *tree;
void create(struct node *);
struct node *insert(struct node *,int);
struct node *preorder(struct node *);
struct node *delete(struct node *,int);
int main()
{
    int ch,val,item;
    create(tree);
    do
    {
        printf("\n1.insert.\n2.preorder.\n3.delete the leaf node.\n4.EXIT\n\n");
        printf("\n enter the choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n enter the value to be inserted: ");
            scanf("%d",&val);
            tree=insert(tree,val);
            break;
            case 2:
            printf("\n the preorder traversal is : \n\n");
            tree=preorder(tree);
            break;
            case 3:
            printf("\n enter the item to be deleted: ");
            scanf("%d",&item);
            tree=delete(tree,item);
            break;
            case 4:
            printf("\nDEFAULT ENTRY!!");
            break;
        }
    }
    while(ch!=4);
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
struct node *delete(struct node *tree,int item)
{
    struct node *prev,*node,*parent;
    if(tree==NULL)
    printf("\n undewflow!!");
    else
    {
        node=tree;
       // parent=tree;
        while(node!=NULL)
        {
           parent=parent->prev;
            if(item>node->data)
            node=node->right;
            else if(item<node->data)
            node=node->left;
            else if(item==node->data)
            {
                parent= node;
                free(parent);

            }

        }
      //  if(item==parent->right)
       // parent->right=NULL;
       // else
     //   parent->left=NULL;        
       // }
        //free(node);
      }  //return tree;
}
