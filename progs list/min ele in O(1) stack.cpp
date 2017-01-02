#include<stdio.h>
#include<conio.h>
#include<limits.h>
using namespace std;
int arr[100],aux[100],top,size,min;

void push(int arr[],int a)
{
     if(top == size-1)
     {printf("\n stack is full");
     
            }
            else{
            top++;
     arr[top] = a;
     
     
     if(a<min)
     {
                   aux[top] = a;
                   min=a;
                   }
     else 
     {
         aux[top] = aux[top-1];
         }
     }
     
     }

void getmin()
{
     if(top == -1)
     {
            printf("\n no element in aux stack");
            
            }
     else
     {
         printf("\n the min element is %d",aux[top]);
         
         }
     }
void pop()
{
     if(top==-1)
     {
                printf("\n stack is empty");
                
                }
      else{
      printf("\n popped ele is %d",arr[top]);
      top--;     
}
     }



int main()
{
    min=INT_MAX;
    size=5;
    top = -1;
    push(arr,10);
    push(arr,18);
    push(arr,19);
    push(arr,29);
    push(arr,15);
   
    getmin();
    
   pop();
   pop();
    
    getmin();
    
    //for(int i=0;i<5;i++)
    //printf("%d",aux[i]);
    getch();
    }
