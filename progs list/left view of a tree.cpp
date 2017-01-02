#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void leftviewprint(struct node *root,int level,int *max_level);
struct node
{
       struct node *left;
       struct node *right;
       int data;
       
       };

struct node *newnode(int a)
{
       struct node *n = (struct node *)malloc(sizeof(struct node));
       n->data = a;
       n->left = n->right = NULL;
       return n;
       
       }

void printtree(struct node *root)
{
     if(root==NULL)
     return;
     else
     {
         printtree(root->left);
         printf("%d",root->data);
         printtree(root->right);
         }
     }

void leftview(struct node *root)
{
     int max_level = 0;
     leftviewprint(root,1,&max_level);
     
     }

void leftviewprint(struct node *root,int level,int *max_level)
{
     if(root == NULL)
     return;
     
     if(*max_level <level)
     {
                   printf("%d",root->data);
                   *max_level = level;
                   
                   }
     leftviewprint(root->left,level+1,max_level);
     leftviewprint(root->right,level+1,max_level);
     }

int main()
{
    struct node *root = newnode(12);
    root->left = newnode(10);
    root->right = newnode(30);
    root->right->left = newnode(25);
    root->right->right = newnode(40);
    printtree(root);
    printf("\n");
    leftview(root);
    getch();
    
    
    
    }
