#include<stdio.h>
#include<stdlib.h>
  

struct node
{
  int data;
  struct node *next;
};
 

void swap(int *a, int *b);
 

void pairWiseSwap(struct node *head)
{
  if(head != NULL && head->next != NULL)
  {
           
    
    swap(&head->data, &head->next->data);
    
    
   pairWiseSwap(head->next->next);
  }  
}

 
 

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}    
 

void push(struct node** head_ref, int new_data)
{
  
  struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
  
  
  new_node->data  = new_data;
  
  
  new_node->next = (*head_ref);  
  
  
  (*head_ref)    = new_node;
}
  

void printList(struct node *node)
{
     
    while(node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
                            
  
}
static void reverse(struct node** head_ref)
{
    struct node* prev   = NULL;
    struct node* current = *head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;  
     
        current->next = prev;   
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
  

int main()
{
  struct node *start = NULL; 
  
  
   push(&start,6);
   
  push(&start, 5);
  push(&start, 4);
  push(&start, 3);
  push(&start, 2);
  push(&start, 1);
 
  printf("\n Linked list before calling  pairWiseSwap() ");
  printList(start);
  
 
  reverse(&start);
   printList(start);
   pairWiseSwap(start);
  
  
  printf("\n Linked list after calling  pairWiseSwap() ");
  printList(start);
  
  getchar();
  return 0;
}
