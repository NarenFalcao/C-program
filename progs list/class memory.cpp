#pragma pack(1) // use this to prevent holes

#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
      
             int a;
         char c; // size of char will be treated as 4 bytes and 3 bytes will get wasted leading to holes
          
                  
};
int main()

{
    cout<<sizeof(sample)<<endl;
    
    sample s;
    cout<<sizeof(s)<<endl;
   
    getch();
    
    }
