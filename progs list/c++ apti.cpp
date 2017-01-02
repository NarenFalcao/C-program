#include<iostream>
#include<conio.h>
using namespace std;
void fun();
int &fun1();
int i;
int main()
{
   /* int i = 9;
    int &p = i;
    int &q = p;
    cout<<q<<endl;*/
    
    
    /*int i=9,a=10;
    int *p=&i;
    int &g = a;
    
    cout<<*p<<endl; //prints val 9
    cout<<p<<endl;//prints address of var i
    cout<<&p<<endl; //prints address of ptr p
    cout<<g<<endl;//prints val 10
    cout<<&g<<endl;//prints addr of referant i.e i address
    cout<<&a<<endl ; //check its same with prev one
    g++;//incre to 11
    cout<<g<<endl;//11
    p++;//increments ptr address
    
    cout<<*p<<endl;//gives garbage
    cout<<p<<endl;//gives incremented address ,, prev address+4
    cout<<&p<<endl; // ptr address s same ,wer its pointing to addres nly changes*/
  
/*  void (*fp) (void);
   fp = fun;
    printf("%d\n",fp);
    
    (*fp)();*/
    
    fun1() = 10;
    cout<<i<<endl;
    
    getch();
    }
void fun()
{
  printf("hi");
  
    }
int &fun1()
{
    i=2;
    return i;
    }
