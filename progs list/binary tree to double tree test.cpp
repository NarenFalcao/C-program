#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node 
{
       int data;
     struct  node *left;
       struct node *right;
       };

struct node *newnode(int a)
{
       struct node *n = (struct node *)malloc(sizeof(struct node));
       n->data = a;
       n->left = n->right = NULL;
       return n;
       
       }

void inorder(struct node *root)
{
    if(root == NULL)
    return;
    
                      inorder(root->left);
                      printf("%d\t",root->data);
                      inorder(root->right);
     
     
     }

void doubletree(struct node *root)
{
     struct node *oldleft;
     
     doubletree(root->left);
     doubletree(root->right);
     
     oldleft = root->left;
     root->left = newnode(root->data);
     root->left->left = oldleft;
     
     
     }

int main()
{
    
    struct node *root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    inorder(root);
    
    doubletree(root);
    printf("\n");
    inorder(root);
    getch();
    
    
    }
