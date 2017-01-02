#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
using namespace std;



struct node 
{
       int val;
       struct node *left;
       struct node *right;
       
       };
struct Stack{
       int size;
       int top;
       struct node **array;
       
       };

struct Stack *createstack(int size)
{
      struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
        stack->size = size;
       stack->top = -1;
     stack->array = (struct node**)malloc(stack->size * sizeof(struct node *));
      return stack;
    }

int isFull(struct Stack *stack)
{
    return stack->top-1 == stack->size;
    
    }
int isEmpty(struct Stack *stack)
{
    return stack->top==-1;
    }
void push(struct Stack *stack,struct node *node)
{
     if(isFull(stack))
     return;
     stack->array[++stack->top] = node;
     }
struct node *pop(struct Stack *stack)
{
       if(isEmpty(stack))
       return NULL;
       else
       return stack->array[stack->top--];
       
       }

struct node *NewNode(int a)
{
       struct node *n = (struct node*)malloc(sizeof(struct node));
       n->val =a;
       n->left = n->right =NULL;
       return n;
       }

//funtion
bool findpairs(struct node *root,int target)
{
     struct Stack *s1 = createstack(MAX);
     struct Stack *s2 = createstack(MAX);
     bool d1=false,d2=false;
     int val1=0,val2=0;
     struct node *cur1 = root,*cur2=root;
     
     while(1)
     {
             while(d1==false)
             {
                             if(cur1!=NULL)
                             {
                                           push(s1,cur1);
                                           cur1 = cur1->left;
                                           
                                           }
                             else
                             {
                                 if(isEmpty(s1))
                                 d1=1;
                                 else
                                 {
                                     cur1 = pop(s1);
                                     val1 = cur1->val;
                                     cur1 = cur1->right;
                                     d1=1;
                                     
                                     }
                                 
                                 }
                             
                             
             }
             
             
             while(d2==false)
             {
                             if(cur2!=NULL)
                             {
                                           push(s2,cur2);
                                           cur2 = cur2->right;
                                           
                                           }
                             else
                             {
                                 if(isEmpty(s2))
                                 d2=1;
                                 else
                                 {
                                     cur2 = pop(s2);
                                     val2 = cur2->val;
                                     cur2 = cur2->left;
                                     d2=1;
                                     
                                     }
                                 
                                 }
                             
                             
             }
             if(val1 != val2 && (val1+val2)==target)
             {
             printf("value found %d + %d = %d",val1,val2,target);
             return true;
             }
             else
             if((val1+val2)<target)
             {
                         d1 = false;          
                                   }
             else
             if((val1+val2)>target)
             {
                         d2 = false;          
                                   }
             else
             if(val1 >= val2)
             return false;
                         
             
             }
     
     
     
         
         }

int main()
{
    /*
                   15
                /     \
              10      20
             / \     /  \
            8  12   16  25    */
int target =45;
  struct node *root =  NewNode(15);
    root->left = NewNode(10);
    root->right = NewNode(20);
    root->left->left = NewNode(8);
    root->left->right = NewNode(12);
    root->right->left = NewNode(16);
    root->right->right = NewNode(25);    
    if(findpairs(root,target)==false)
    {
                                     printf("not found");}
    getch();
    }
