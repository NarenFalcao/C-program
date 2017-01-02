#include <stdio.h> 
#include <stdlib.h> 
#include <windows.h> 
#include <conio.h> 
using namespace std;

int main()
{
    printf("TIMEOUT : ");
    for(int i=9;i>0;i--)
 {
              
   printf("%d",i);
   fflush(stdout);
   Sleep(1000);
   printf("\b");
 }
    
    }
