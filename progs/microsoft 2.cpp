
#include<cstdio>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
       int a;
       struct node *next;
};

void removeLoop(struct node *loop_node, struct node *head);


void insert(struct node **ptr,int data)
{
       struct node *newnode;
       if(*ptr==NULL)
       {
                     //a list must undergo size allocation
                     *ptr=(struct node *)malloc(sizeof(struct node));
                     (*ptr)->a=data;
                     (*ptr)->next=NULL;
       }
       else
       {
                     struct node *temp;
                     temp=*ptr;
                     while(temp->next!=NULL)
                     {
                                      temp=temp->next;                
                     }
                     //new node size allocation
                     newnode=(struct node *)malloc(sizeof(struct node));
                     newnode->a=data;
                     newnode->next=NULL;
                     temp->next=newnode;
       }
}
int display(struct node *ptr)
{
    int count=0;
     while(ptr!=NULL)
     {
            printf("%d\t",ptr->a);
            ptr=ptr->next;
            count++;
     }
     return count;
}


void del(struct node **ptr,int data)
{
       struct node *t,*temp;
       if((*ptr)->a==data)
       {
                         //delete first node
                         t=(*ptr);
                         (*ptr)=(*ptr)->next;
                         return;
       }
       temp=*ptr;
       while(temp->next!=NULL)
       {
                             if(temp->next->a==data)
                                                   break;
                             temp=temp->next;                          
       }
       if(temp->next==NULL)
       {
                           //reached last node
                           printf("Element not found..\n");
                           return;
       }
       t=temp->next;
       temp->next=temp->next->next;
       delete(t);
}

void pointtomid(struct node **ptr,int mid)
{
       int count=0;
 
 struct node *temp = *ptr;
struct node *t = *ptr;
 while(count<mid)
 {
                 temp = temp->next;
                 count++;
                 
                 }
 //printf("%d",temp->a);
  while(t->next!=NULL)
  {
                   t = t->next;
                   }
  t->next=temp;
  
  printf("Mid = %d\n",t->next->a);
    
       }
int detectAndRemoveLoop(struct node *list)
{
    struct node  *slow_p = list, *fast_p = list;
 
    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;

        if (slow_p == fast_p)
        {
            removeLoop(slow_p, list);
 
            return 1;
        }
    }
 
    return 0;
}
 
void removeLoop(struct node *loop_node, struct node *head)
{
   struct node *ptr1;
   struct node *ptr2;
 
   ptr1 = head;
   while(1)
   {
     ptr2 = loop_node;
     while(ptr2->next != loop_node && ptr2->next != ptr1)
     {
         ptr2 = ptr2->next;
     }
 
     if(ptr2->next == ptr1)
        break;
 
     else
       ptr1 = ptr1->next;
   }
 
   ptr2->next = NULL;
}




int main()
{
    struct node *p,*lastnode=NULL;
    p=NULL;int cnt=0;
    int c,mid;
    int num;
    for(int i=1;i<8;i++)
    {
            insert(&p,i);
    }

  c =  display(p); // get count while displaying
   mid = c/2;
  pointtomid(&p,mid); // last node points to middle 
 
 detectAndRemoveLoop(p); //Remove loops so yu can proceed further

  del(&p,7); 
   del(&p,5); 
  c =  display(p);
// // delete a num
   // get the count again
  mid = c/2;
  pointtomid(&p,mid); 
 // c =  display(p); this will give looped data
  //detectAndRemoveLoop(p); Use this to remove loops
  // c =  display(p); and print the data in list
    getch();
}
