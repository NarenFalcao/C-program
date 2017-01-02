#include<cstdio>
#include<stdlib.h>
#include<malloc.h>
#include<queue>
#include<iostream>
#include<stack>
#include<conio.h>
using namespace std;
struct node
{
       int a;
       struct node *left;
       struct node *right;
              };
void insert(struct node **ptr,int data)
{
    if((*ptr) == NULL)
    {
              (*ptr) = (struct node *)malloc(sizeof(struct node));
                (*ptr)->a = data;
              (*ptr)->left = (*ptr)->right = NULL;
            
              return;
              }
    if(data < (*ptr)->a)
    {
            insert(&((*ptr)->left),data);
            
            }
    if(data > (*ptr)->a)
    {
            insert(&((*ptr)->right),data);
            
            }
            else
            {return;
            }
    
    }
int findmin(struct node *ptr)
{
    while(ptr->left != NULL)
    {
                    ptr = ptr->left;
                    }
                    return (ptr->a);
    } 
void inorder(struct node *ptr)
{
     while(ptr != NULL)
     {
               inorder((ptr->left));
               printf("%d",ptr->a);
               inorder((ptr->right));
               
               
               }
     
     }    
void deletetree(struct node **ptr)
{
     while((*ptr) != NULL)
     {
     deletetree(&(*ptr)->left);
     deletetree(&(*ptr)->right);
     (*ptr) = NULL;
     delete(*ptr);
     
     }     
}

void delete1(struct node **ptr,int data)
{
     if((*ptr) == NULL)
     {
                return ;
     }
     if(data < (*ptr)->a)
     {
             delete1(&((*ptr)->left),data);
             
             }
   else  if(data > (*ptr)->a)
     {
             delete1(&((*ptr)->right),data);
             }
     else 
     
     {
          if((*ptr)->left != NULL && (*ptr)->right != NULL)
      {
                    int res = findmin((*ptr)->right);
                    (*ptr)->a = res;
                    delete1(&((*ptr)->right),res);
                    }       
     else
     {
         struct node *temp = (*ptr);
         if((*ptr)->left != NULL)
         {
                    (*ptr) = (*ptr)->left;
                       
                       }
        else if((*ptr)->right != NULL)
         {
                       (*ptr) = (*ptr)->right;
                       
                       }
          else
          {
              (*ptr) = NULL;
              }  
              temp = NULL;         
          delete(temp);    
     }
}
}
int main()
{
    struct node *tree = NULL;
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
      inorder(tree);
        printf("\n");
    getch();
}
    
