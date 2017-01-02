#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
       int data;
       struct node *prev;
       struct node *next;
       };
int countnodes(struct node *head);
struct node *DLLtoBST(struct node **ptr,int n);

void insert(struct node **ptr,int a)
{
     struct node *newnode;
     
     if((*ptr) == NULL)
     {
            (*ptr) = (struct node*)malloc(sizeof(struct node));
            (*ptr)->data = a;
            (*ptr)->prev = (*ptr)->next = NULL;
            return;
            
            }
   
         newnode = (struct node*)malloc(sizeof(struct node));
         newnode->data = a;
         struct node *temp = *ptr;
         while(temp->next!=NULL)
         {
                         temp = temp->next;
                                }
                temp->next = newnode;
                                newnode->prev = temp;
                                newnode->next = NULL;
         
         
     
     }

     
void print_list(struct node *head)
{
     while(head!=NULL)
     {
                      printf("%d \t",head->data);
                      head = head->next;
                      
                      }
     
     }
struct node* DLL2BST(struct node *ptr)
{
       int count = countnodes(ptr);
       
       return DLLtoBST(&ptr,count);
       
       
       
       }
struct node *DLLtoBST(struct node **ptr,int n)
{
       if(n<=0)
    return NULL;
    
    struct node *left = DLLtoBST(ptr,n/2);
    
    struct node *root = *ptr;
    
    root->prev = left;
    
    (*ptr) = (*ptr)->next;
    
    root->next = DLLtoBST(ptr,n-n/2-1);
    
    return root;
       
       
       }       
       
void preorder(struct node *head)
{
    if(head==NULL)
    return;
    
                      printf("%d",head->data);
                      preorder(head->prev);
                      preorder(head->next);
                      
              
     }       

int countnodes(struct node *head)
{
    int count=0;
    struct node *temp = head;
    while(temp!=NULL)
    {
               temp=temp->next;
               count++;
               }
    return count;
    
    }
int main()
{
    struct node *ptr = NULL;
    for(int i=1;i<8;i++)
    insert(&ptr,i);
    print_list(ptr);
    struct node *root = DLL2BST(ptr);
    preorder(root);
    
    
    getch();
    }
