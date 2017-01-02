#include<stdio.h>
#include<conio.h>
#define MAX 5
using namespace std;
int arr[100],head,tail;

void enqueue(int arr[],int a)
{
     int temp = (tail+1)%MAX;
     if(head==temp)
     {
                   printf("\n queue overflow");
                   
                   }
     else
     {
         arr[tail] = a;
         tail = temp;
         
         }
     
     
     }
void dequeue()
{
     if(head == tail)
     printf("\n queue underflow");
     else
     {
         printf("%d\n",arr[head]);
         head = (head+1)%MAX;
         }
     
     }


int main()
{
    head=tail=0;
    enqueue(arr,10);
    enqueue(arr,20);
    enqueue(arr,30);
    enqueue(arr,40);
    enqueue(arr,50);
   
    getch();
    
    
    }
