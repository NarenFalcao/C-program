#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node 
{
       int data;
       struct node *next;
       };

void push(struct node **root,int a)
{
     struct node *n = (struct node *)malloc(sizeof(struct node));
  n->data = a;
     n->next = (*root);
     (*root) = n;
     
     
     
     }
  
void printlist(struct node *root)
{
     while(root!=NULL)
     {
                      printf("%d\t",root->data);
                      root = root->next;
                      }
     
     }

struct node *reverse(struct node *root,int m)
{

     int count=0;
    
     
     struct node *prev = NULL;
     struct node *cur = root;
     struct node *next;
     while(cur!=NULL && count<m)
     {
                     next   = cur->next;
                     cur->next  = prev;
                     prev = cur;
                     cur= next;
                     count++;
                     }
     if(next!=NULL)
     root->next = reverse(next,m);
     
     return prev;
     
     }
     
     
     
int main()
{
    struct node *root = NULL;
    struct node *head;
    push(&root,3);
    push(&root,5);
    push(&root,6);
    push(&root,7);
    push(&root,9);
    push(&root,2);
    printlist(root);
   
   head =  reverse(root,4);
    printf("\n");
    printlist(head);
    getch();
    
    
    
    }
