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
int priority(char a)
{
    if(a=='*' || a == '/')
    return 2;
    else if(a=='+' || a=='-')
    return 1;
    else
    return 0;
    }
int main()
{
    char postfix[100],c,temp;int j=0;
    string infix;
    cin>>infix;
    int len = infix.length();
    size =100;
    top = -1;
    for(int i=0;i<len;i++)
    {
            c = infix[i];
            if(isalpha(c))
            postfix[j++] = c;
            else
            {
             if( c == '(')
            {
                 push(arr,c);
                 
                 }
            else if(c == ')')
            {
                 temp = pop();
                 while(temp!=')')
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
                                postfix[j++] = temp;
                                temp = pop();
                                
                                }
                if(temp!='0')
                push(arr,temp);
                push(arr,c);
                }
           
                }
            }
            while((temp =pop())!='0')
            postfix[j++] = temp;
            postfix[j]='\0';
    
    
    
    
    }
