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
void reverse(struct node **head)
{
     struct node *prev = NULL;
     struct node *cur = *head;
     struct node *next;
     while(cur!=NULL)
     {
                     next = cur->next;
                     cur->next = prev;
                     prev = cur;
                     cur = next;
                     
                     
                     
                     
                     }
     (*head) = prev;
     
     
     }
int main()
{
    struct node *root = NULL;
    push(&root,3);
    push(&root,5);
    push(&root,6);
    push(&root,7);
    printlist(root);
    reverse(&root);
    printf("\n");
    printlist(root);
    getch();
    
    
    
    }
