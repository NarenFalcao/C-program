#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct qnode
{
       struct qnode *next,*prev;
       unsigned pagenumber;
       };

struct queue
{
       unsigned count;
       unsigned totalframe;
       struct qnode *front,*rear;
       };

struct hash
{
       unsigned capacity;
       struct qnode **arr;
       };
       
void dequeue(struct queue *q);
       
struct qnode *createnode(unsigned pageno)
{
       
       struct qnode *temp = (qnode *) malloc (sizeof(qnode));
       temp->pagenumber = pageno;
       temp->next = temp->prev = NULL;
       return temp;
       }

struct queue *createqueue(unsigned totalframe)
{
       struct queue *q = (queue *) malloc ( sizeof(queue));
       q->count = 0;
       q->front = q->rear = NULL;
       q->totalframe = totalframe;
       return q;
       }
struct hash *createhash(unsigned capacity)
{
       struct hash *h = (hash *) malloc(sizeof(hash));
       h->capacity = capacity;
       
       h->arr = (qnode **)malloc(h->capacity * sizeof(qnode *));
      
       for(int i=0;i<h->capacity;++i)
       h->arr[i] = NULL;       
        return h;
       
       }

int allframefull(queue *queue)
{
     return queue->count == queue->totalframe;
     }
int allframeempty(queue *queue)
{
     
     return queue->rear == NULL;
     }

void enqueue(struct queue *q,struct hash *h,unsigned pagenumber)
{
     if(allframefull(q))
     {
                 h->arr[q->rear->pagenumber] = NULL;     
                  dequeue(q);     
                       }
     struct qnode *temp = createnode(pagenumber);
   temp->next = q->front;
     if(allframeempty(q))
     {
                         q->front = q->rear = temp;
                         }
     
     q->front->prev = temp;
     q->front = temp;
     
     //hash it and incr the count
     
     h->arr[pagenumber] = temp;
     q->count++;
     }
   
void dequeue(struct queue *q)
{
     if(allframeempty(q))
     return;
     if(q->front == q->rear)
     {
                 q->front = NULL;
                 }
     struct qnode *temp = q->rear;
     q->rear = q->rear->prev;
     q->rear->next  = NULL;
     free(temp);
     q->count--;
     
     }

void requestpage(struct queue *q,struct hash *h,unsigned pgno)
{
     struct qnode *reqpage = h->arr[pgno];
     if(reqpage == NULL)
     {
              enqueue(q,h,pgno);
              
              }
     else if(reqpage != q->front)
     {
          reqpage->prev->next = reqpage->next;
          if(reqpage->next)
          {
                           reqpage->next->prev = reqpage->prev;
                           }
          
          if(q->rear == reqpage)
          {
                     q->rear = q->rear->prev;
                     q->rear->next = NULL;
                     }
          reqpage->next = q->front;
          reqpage->next->prev = reqpage;
          reqpage->prev = NULL;
          q->front = reqpage;
          
          }
     
     }
     
int main()
{
    // Let cache can hold 4 pages
    queue* q = createqueue( 4 );
 
    // Let 10 different pages can be requested (pages to be
    // referenced are numbered from 0 to 9
    hash* hash = createhash( 10 );
 
    // Let us refer pages 1, 2, 3, 1, 4, 5
    requestpage( q, hash, 1);
    requestpage( q, hash, 2);
    requestpage( q, hash, 3);
    requestpage( q, hash, 1);
    requestpage( q, hash, 4);
    requestpage( q, hash, 5);
 
    // Let us print cache frames after the above referenced pages
    printf ("%d ", q->front->pagenumber);
    printf ("%d ", q->front->next->pagenumber);
    printf ("%d ", q->front->next->next->pagenumber);
    printf ("%d ", q->front->next->next->next->pagenumber);
 
    getch();
}
