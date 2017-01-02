#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int arr[100],top,size;

using namespace std;

struct node 
{
       int data;
       struct node *left;
       struct node *right;
       
       };
int height(struct node *p);
void printlevelorder(struct node *p,int h);

struct node *newnode(int a)
{
       struct node *n = (struct node *)malloc(sizeof(struct node));
       n->data = a;
       n->left = n->right =NULL;
       return n;
       
       }
void push(int n)
{
     if(top == size-1)
     printf("\n stack is full");
     else
     {
         top++;
         arr[top] = n;
         
         
         }
     
     
     }
void pop()
{
     if(top == -1)
     printf("\n stack is empty");
     else
     {
         printf("\nthe lement popped is %d",arr[top]);
         top--;
         
         }
     
     }


void printtree(struct node *p)
{
 if(p==NULL)
 return;
 else
 {
    
    
     printtree(p->left);
       printf("%d\t",p->data);
     
      printtree(p->right);
     
     }    
     }

void levelorder(struct node *p)
{
     int h = height(p);
     for(int i=1;i<=h;i++)
     {
             printf("\n");
            printlevelorder(p,i);
            
            
            }
          
     
     }
void printlevelorder(struct node *p,int h)
{
     if(p == NULL)
     { return;
     
     }
     if(h == 1)
     {
         
     printf("%d\t",p->data);
     push(p->data);
    
     
     }
     else if(h>1)
     {
        
          printlevelorder(p->left,h-1);
          printlevelorder(p->right,h-1);
          
          
          }
      
     
     
     
     }

int height(struct node *p)
{
    if(p==NULL)
    return 0;
   
    else
    {
    
    int lh = height(p->left);
    int rh = height(p->right);
    
    if(lh>rh)
return lh+1;
else 
return rh+1;
    
}


    }



int main()
{
    
    struct node *p = newnode(8);
    p->left = newnode(3);
    p->right = newnode(9);
    p->left->left = newnode(6);
    p->left->right = newnode(8);
    p->right->left = newnode(4);
     p->right->right = newnode(11);
      p->left->right->left = newnode(12);
       p->left->right->right = newnode(1);
    printtree(p);
    size = 9;
    top = -1;
    levelorder(p);
  for(int i=0;i<9;i++)
  {
  pop();
  printf("\n");
}
  getch();
    
    
    }
