#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

void toascii(float a,char *s)
{
              sprintf(s,"%f",a);
              
              }
void toascii(int a,char *s)
{
     itoa(a,s,10);
     }     
     
void fromascii(float *f,char *s)
{
     sscanf(s,"%f",f);
     }         

void fromascii(int *i,char *s)
{
     *i = atoi(s);
     }


int main()
{
    float f = 1.234f;int x;float y;
    int a=45;
    char ans[20];
    char ans1[20];
    
    toascii(f,ans);
    toascii(a,ans1);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    
    
    char var1[] = "3.455";
    char var2[] = "34";
    
    fromascii(&x,var2);
    fromascii(&y,var1);
    
    cout<<x<<endl;
    cout<<y<<endl;
    
    getch();
    
    
    }

