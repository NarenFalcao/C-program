#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class twostacks
{
      int *arr;
      int size;
      int top1,top2;
      public:
             twostacks(int n)
             {
                        size = n;
                        arr = new int[n];
                        top1 = -1;
                        top2 = n;
                        
                        
                        }
      
      void push1(int x)
      {
           if(top1>=top2-1)
           {
                           cout<<"stack overflow\n";
                           exit(0);
                           }
           else
           {
               top1++;
               arr[top1] = x;
               
               
               }
           
           }
           
           
      void push2(int x)
      {
           if(top1>=top2-1)
           {
                           cout<<"stack overflow\n";
                           exit(0);
                           }
           else
           {
               top2--;
               arr[top2] = x;
               
               
               }
           
           }
      int pop1()
      {
          if(top1>=0)
          {
                     int x = arr[top1];
                     top1++;
                     return x;
                     
                     }
                      else
                     {
                         cout<<"\n stack underflow";
                        
                         }
          
          
          
          }
      
      int pop2()
      {
          if(top2<size)
          {
                     int x = arr[top2];
                     top2--;
                     return x;
                     
                     }
                     else
                     {
                         cout<<"\n stack underflow";
                         //exit(0);
                         }
          
          
          
          }
          
          void printstack()
          {
               for(int i=0;i<size;i++)
               cout<<arr[i]<<endl;
               
               }
      
      
      };
      
int main()
{
     twostacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    ts.printstack();
   
   getch();
    }
