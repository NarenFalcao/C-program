#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node 
{
       int data;
       struct node *npx;
       };
struct node *XOR(struct node *a,struct node *b)
{
       return (struct node *)((unsigned int)(a) ^ (unsigned int)(b));
       
       }
void insert(struct node **p,int a)
{
     struct node *newnode = (struct node *)malloc(sizeof(struct node));
     newnode->data = a;
     
     newnode->npx = XOR(*p,NULL);
     
     if((*p)!=NULL)
     {
                   struct node *next = XOR((*p)->npx,NULL);
                              (*p)->npx    =     XOR(newnode,next);
                   
                   }
     *p = newnode;
     
     
     }
void printlist(struct node *p)
{
     struct node *cur = p;
     struct node *prev = NULL;
     struct node *next;
     while(cur!=NULL)
     {
                   printf("%d\n",cur->data);
                   
                   next  = XOR(cur->npx,prev);
                   
                   prev = cur;
                   cur = next;
                   
                   
                   }
     
     
     }

int main()
{
    
    struct node *p = NULL;
    insert(&p,10);
    insert(&p,20);
    insert(&p,30);
    insert(&p,40);
    printlist(p);
    getch();
    
    
    
    
    }
