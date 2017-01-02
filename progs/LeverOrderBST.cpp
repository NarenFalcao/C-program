#include<cstdio>
#include<stdlib.h>
#include<malloc.h>
#include<queue>
#include<iostream>
#include<stack>
using namespace std;
struct node
{
       int a;
       struct node *left;
       struct node *right;
};
void levelorder(struct node *ptr);
void printlevelorder(struct node *ptr,int level);
int height(struct node *ptr);
void insert(struct node **ptr,int data)
{
     if((*ptr)==NULL)
     {
                      (*ptr)=(struct node *)malloc(sizeof(struct node));
                      (*ptr)->a=data;
                      (*ptr)->left=(*ptr)->right=NULL;
                      return;
     }
     if(data<(*ptr)->a)
     {
          insert(&((*ptr)->left),data);
     }
     else if(data>(*ptr)->a)
     {
         insert(&((*ptr)->right),data);
     }
     else
     {
         return;
     }
}
void inorder(struct node *ptr)
{
     if(ptr!=NULL)
     {
                  inorder(ptr->left);
                  printf("%d\n",ptr->a);
                  inorder(ptr->right);
     }
}
void del_tree(struct node **ptr)
{
     if((*ptr)!=NULL)
     {
                     del_tree(&(*ptr)->left);
                     del_tree(&(*ptr)->right);
                     (*ptr)=NULL;
                     delete(*ptr);
     }
}
int findmin(struct node *ptr)
{
    while(ptr->left!=NULL)
    {
                    ptr=ptr->left;
    }
    return (ptr->a);
}
void del(struct node **ptr,int data)
{
     if((*ptr)==NULL)
                     return;
    //printf("hai\n");
     if(data<(*ptr)->a)
     {
        del(&((*ptr)->left),data);              
     }
     else if(data>(*ptr)->a)
     {
          del(&((*ptr)->right),data);     
     }
     else
     {
         if((*ptr)->left!=NULL && (*ptr)->right!=NULL)
         {
                               int rep=findmin((*ptr)->right);
                               (*ptr)->a=rep;
                             //  printf("%d\n",rep);
                               del(&((*ptr)->right),rep);
         }
         else
         {
             struct node *temp=(*ptr);
             if((*ptr)->left!=NULL)
             {
                                   (*ptr)=(*ptr)->left;
             }
             else if((*ptr)->right!=NULL)
             {
                                   (*ptr)=(*ptr)->right;
             }
             else
             {
                 (*ptr)=NULL;
             }
             temp=NULL;
             delete(temp);
         }
     }
}

void levelorder(struct node *ptr)
{
     int h = height(ptr);
     for(int i=1;i<=h;i++)
     printlevelorder(ptr,i);
     
     }
void printlevelorder(struct node *ptr,int level)
{
     if(ptr == NULL)
     return;
     if(level ==1)
     printf("%d \t ",ptr->a);
     else if(level >1)
     {
          printlevelorder(ptr->left,level-1);
          printlevelorder(ptr->right,level-1);
          
          }
     
     }
int height(struct node *ptr)
{
    if(ptr == NULL)
    return 0;
    else
    {
        int lheight = height(ptr->left);
        int rheight = height(ptr->right);
        if(lheight>rheight)
        return(lheight+1);
        else
        return(rheight+1);
        
        }
    
    }

int main()
{
    int num;
    struct node *tree=NULL;
    insert(&tree,10);
    insert(&tree,12);
    insert(&tree,7);
    insert(&tree,4);
    insert(&tree,5);
    insert(&tree,22);
    insert(&tree,11);
    insert(&tree,21);
    insert(&tree,3);
    insert(&tree,5);
        //del(&tree,12);
    inorder(tree);
    
    levelorder(tree);
    //int h=height(tree);
  //  printf("%d\n",h);
    //del_tree(&tree);
    //inorder(tree);

    printf("\n");
   
    scanf("%d",&num);
    return 0;
}
