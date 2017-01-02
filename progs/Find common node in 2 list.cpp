#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
       struct node *next;
       int data;
       
       };
void commonnodelist(int d,struct node *head1,struct node *head2);
int countnodes(struct node *head);

void printlist(struct node *head)
{
     while(head!=NULL)
     {
     printf("%d \t",head->data);
     head=head->next;
     }
     }
void commonnode(struct node *head1,struct node *head2)
{
    int d;
    int c1 = countnodes(head1);
    int c2 = countnodes(head2);
    if(c1>c2)
    {
             d=c1-c2;
             commonnodelist(d,head1,head2);
             
             }
    else if(c2>c1)
    {
         d = c2-c1;
         commonnodelist(d,head2,head1);
         
         }
    
    
    
    }
void commonnodelist(int d,struct node *head1,struct node *head2)
{
     while(head1!=NULL && d!=0)
     {
                       head1 = head1->next;
                       d--;
                       }
     while(head1!=NULL && head2!=NULL)
     {
     if(head1->data == head2->data)
 {    
      printf("%d",head1->data);
      break;
     
     }    
     head1= head1->next;
     head2=head2->next;
     }
} 
int countnodes(struct node *head)
{
    int count =0;
    while(head!=NULL)
    {
                 head=head->next;
                 count++;    
                     }
    return count;
    }     
     
int main()
{
    // 1st 3->6->9->15->30
    //2nd 10->15->30
    struct node *head1;
    head1 = (struct node*)malloc(sizeof(struct node));
    struct node *head2;
    head2 = (struct node*)malloc(sizeof(struct node));
    head2->data = 10;
    head1->data = 3;
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 6;
     head1->next=newnode;
    
     newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 9;
     head1->next->next =newnode;
    
    
     newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 15;
    head2->next = newnode;
     head1->next->next->next =newnode;
    
     newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 30;
  head2->next->next = newnode;
  head2->next->next->next = NULL;
 
    //printlist(head2);
    commonnode(head1,head2);
    
    getch();
    
    
    }       
       
