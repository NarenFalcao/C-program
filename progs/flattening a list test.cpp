#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node
{
       int data;
       struct node *down;
       struct node *right;
       
       };

void push(struct node **head_ref,int a)
{
     struct node *new_node = (struct node *)malloc(sizeof(struct node));
     new_node->data =a;
     
     new_node->right = NULL;
     new_node->down = (*head_ref);
     (*head_ref) = new_node;
 }
 
void printlist(struct node *node)
{
     while(node!=NULL)
     {
                //      printf("%d\n",node->data);
                      node = node->right;
     }
}

int main()
{
    struct node *root = NULL;
    
     push( &root, 30 );
    push( &root, 8 );
    push( &root, 7 );
    push( &root, 5 );
 
    push( &( root->right ), 20 );
    push( &( root->right ), 10 );
 
    push( &( root->right->right ), 50 );
    push( &( root->right->right ), 22 );
    push( &( root->right->right ), 19 );
 
    push( &( root->right->right->right ), 45 );
    push( &( root->right->right->right ), 40 );
    push( &( root->right->right->right ), 35 );
    push( &( root->right->right->right ), 20 );
 
 printlist(root);   
    getch();
    return 0;
    
    }
