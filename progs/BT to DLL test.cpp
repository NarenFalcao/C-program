#include<stdio.h>
#include<conio.h>

struct node
{
       node *left;
       node *right;
       int data;
       
       };
       
node *new_node(int a)
{
     node *newnode = new node;
     newnode->data = a;
     newnode->left = newnode->right = NULL;
     return(newnode);
     }

void print_list(node *root)
{
     while(root!=NULL)
     {
                      printf("%d",root->data);
                      root=root->right;
                      
                      }
     
     
     }   
node *toDLL(node *root)
{
     if(root ==NULL)
     return root;
     else
     {
         if(root->left !=NULL)
         {
                       node *left = toDLL(root->left);
                       
                       for(;left->right!=NULL;left = left->right);
                       
                       //assign root as next to left
                       root->left = left;
                       left->right=root;
                       
                       }
         if(root ->right !=NULL)
         {
                 node *right = toDLL(root->right);
                 
                 for(;right->left!=NULL;right = right->left);
                 
                 //assign root's right to right
                 root->right = right;
                 right->left = root;
                 
                 
                 
                 
                 }
         
         }
     
     
         return (root);
         
     }
     
node *BSTtoDLL(node *root)
{
     if(root == NULL)
     return root;
     else
     {
         node *root = toDLL(root);
         while(root->left!=NULL)
         root = root->left;
         }
     return (root);
     
     }     
     
int main()
{
    node *root = new_node(10);
    root->left = new_node(12);
    root->left->left = new_node(25);
    root->left->right=new_node(30);
    root->right = new_node(15);
    root->right->left = new_node(36);
    
    node *head = BSTtoDLL(root);
    print_list(head);
    getch();
    
    
    
    
    }       
     
