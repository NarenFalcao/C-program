#include<cstdio>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
struct node 
{
       int a;
       struct node *next;
       };

void insert(struct node **ptr,int data)
{
     struct node *newnode,*temp;
     if(*ptr == NULL)
     {
             (*ptr) = (struct node *)malloc(sizeof(struct node));
            (*ptr)->a = data;
            (*ptr)->next = NULL;
             }

else
{

temp = *ptr;
while(temp->next != NULL)
{
                       temp = temp->next;
}
newnode = (struct node*)malloc(sizeof(struct node));
newnode->a=data;
newnode->next=NULL;
temp->next = newnode;
}
}

struct node * operation(struct node **head_ref)
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
                 
     
     

void display(struct node *ptr)
{
     while(ptr !=NULL)
     {
                      printf("%d \n",ptr->a);
                      ptr=ptr->next;
                     
                      }
}

struct node *merge(struct node **a,struct node **b)
{
      
      struct node *ans = *a;
      
       while(ans->next!=NULL)
       {
                     ans=ans->next;
                     }
       ans->next=*b;
       return *a;
       
       }
int countnodes(struct node *p)
{
    int cnt= 0;
    if(p!=NULL)
    {
               cnt++;
               p=p->next;
               }
    return cnt;
    }

int main()
{
     struct node *p,*temp,*ans,*temp1,*ans1;
     p = NULL;
     int i;
     for(i=1;i<11;i++)
     insert(&p,i);
     struct node *t = p;
       struct node *t1 = p;
      display(p);
      int k=4,ax=8;
      int c = countnodes(p);
      if(c==0)
      printf("no nodes");
      else
      {
       
       
      
      while(t1!=NULL && ax>1)
      {t1=t1->next;
      ax--;
                 }
      temp1=t1->next;
      t1->next=NULL;
      
     //  display(temp1);
      
      while(t!=NULL && k>1)
      {t=t->next;
      k--;
                 }
      temp=t->next;
      t->next=NULL;
      operation(&p);
     //  display(p);
    operation(&temp);
  //  display(temp);
  ans =  merge(&p,&temp);
  ans1 = merge(&ans,&temp1);
 //ans->next=temp1;

    display(ans1);
}
     getch();
}
                   
     
