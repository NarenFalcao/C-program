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

void insert_pos(struct node **ptr,int pos,int data)
{
    
     struct node *newnode,*temp;int count=1;
     newnode = (struct node *)malloc(sizeof(struct node));
     newnode->a = data;
      //insert in 1st pos
      temp = *ptr;
     if(pos==1)
     {
                newnode->next=*ptr;
               *ptr = newnode;
               return;
               }
  
     while(temp->next!=NULL)
     {
                         if(count=pos-1)
                         {
                                        break;
                                        }
                                         count++;
                         temp=temp->next;
                        
}
if(count=pos-1)
{
               if(temp->next != NULL)
               {
newnode->next = temp->next;
temp->next = newnode;
}
else
{
    newnode->next = temp->next;
temp->next = newnode;
    
    }
    }
else
{
printf("not a valid pos");
}

}
              
                 
     
     

void display(struct node *ptr)
{
     while(ptr !=NULL)
     {
                      printf("%d \n",ptr->a);
                     //  printf("%d \n",ptr->next);
                      ptr=ptr->next;
                     
                      }
}

int main()
{
     struct node *p;
     p = NULL;
     int i;
     for(i=0;i<5;i++)
     insert(&p,i);
     
      display(p);
     insert_pos(&p,3,6);
      display(p);
     insert_pos(&p,2,10);
     display(p);
     getch();
}
                   
     
