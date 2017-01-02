#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

char arr[100],top,size;

void push(char arr[],char a)
{
     if(top == size-1)
     {
            cout<<"stack is full";
            
            }
     else
     {
         top++;
         arr[top] = a;
         }
     
     }
char pop()
{
     if(top==-1)
     return '0';
     else
     {
         return arr[top--];
         }
     
     
     }
     
int main()
{
    char c,temp;
    string expr;
    cin>>expr;
    size =100;
    int len = expr.length();
   // if(expr[0] == '}' || expr[0] == ')' || expr[0] == ']')
    //cout<<"failed";
    for(int i=0;i<len;i++)
    {
            c = expr[i];
            if(c == '(' || c == '{' || c == '[')
            push(arr,c);
            else
            {
                if(c == ')')
                {
                     temp = pop();
                     if(temp != '(')
                     cout<<"failed";
                     
                     }
              else  if(c == '}')
                {
                     temp = pop();
                     if(temp != '{')
                     cout<<"failed";
                     
                     }
              else  if(c == ']')
                {
                     temp = pop();
                     if(temp != '[')
                     cout<<"failed";
                     
                     }
               
                
                
                }              
            
            
            }
    
    getch();
    }
