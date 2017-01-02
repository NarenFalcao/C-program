#include <stdlib.h>
#include<iostream>
using namespace std;
int** p;
int** q;

int main() 
{ 
  int* a; 
  {
    int* b; 
 
    a = (int*) malloc(sizeof(int)); // memory 1
    b = (int*) malloc(sizeof(int)); // memory 2

    *a = 42;
    // point 1
    b = (int*) malloc(sizeof(int)); // memory 3
    *b = *a;

    p = &a;
    q = &b;
    // point 2
    
    printf("%d %d",**p,*a);
    printf("\n%d %d",*p,a);
    printf("\n %d %d",**q,*b);
    printf("\n %d %d",*q,b);
    
    printf("\n%d %d",p,&a);
    printf("\n%d %d",a,*a);
  }
}

