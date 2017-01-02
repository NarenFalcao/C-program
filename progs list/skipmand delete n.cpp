#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
                      root=root->next;
                      }
     }

void skipmanddeleten(struct node *root,int m,int n)
{
     struct node *t,*cur = root;
     int i;
     while(cur)
     {
     for(i = 0 ;i<m-1 && cur!=NULL;i++)
     {
           cur = cur->next;
           
           
           }
           if(cur == NULL)
           return;
           t = cur->next;
     for(int j = 0 ;j<n&&t!=NULL;j++)
     {
             struct node *temp = t;
             t=t->next;
             free(temp);
             
             }      
             cur->next = t;
             cur = t;
     
     
     }
     }

int main()
{
    struct node *root = NULL;
    int m,n;
    push(&root,10);
    push(&root,20);
    push(&root,30);
    push(&root,40);
    push(&root,50);
    push(&root,60);
    printlist(root);
  //  printf("\n enter m and n");
// scanf("%d %d",m,n);
printf("\n");
    skipmanddeleten(root,1,1);
    printlist(root);
    getch();
    
    }
