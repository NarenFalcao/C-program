#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

char arr[100],top,size=100;

void push(char arr[],char a)
{
     if(top == size-1)
     {cout<<"stack is full"<<endl;
     
            }
            else{
            top++;
     arr[top] = a;
     
     }
     
     }


char pop()
{
     if(top==-1)
     {
            return '0';
                
                }
      else{
     
          
       return arr[top--];
}
     }
     
int priority(char c)
{
    if(c=='/' || c=='*')
              return 2;
    else if(c=='+' || c=='-')
              return 1;    
    else
        return 0;
}

int main()
{
  
   char postfix[100],c,temp; int j=0;top=-1;
    string infix;
    cin>>infix;
    int len = infix.length();

    
    for(int i=0;i<len;i++)
    {
            c = infix[i];
            if(isalpha(c))
            {
                          postfix[j++] = c;
                          }
            else
            {
             if(c == '(')
            {
                 push(arr,c);
                 }
            else if(c == ')')
            {
                 temp = pop();
                 while(temp!='(')
                 {
                                 postfix[j++] = temp;
                                 temp = pop();
                                 
                                 }
                 
                 }
            else 
            {
                 temp = pop();
                 while(temp!='0' && priority(temp)>=priority(c))
                 {
                                 postfix[j++]=temp;
                                 temp = pop();
                                 
                                 }
                 if(temp!='0')
                 push(arr,temp);
                 push(arr,c);
                 
                 }
            
            
            }
            }
            
    while((temp=pop())!='0')
                   postfix[j++] = temp;
                  
   postfix[j]='\0';
   cout<<postfix;
   getch();
    
    
    }
