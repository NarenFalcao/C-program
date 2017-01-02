#include<stdio.h>
#include<conio.h>
using namespace std;

float printsquareroot(float n)
{
    float x=n;
    float y=1;
    float e = 0.000001;
    
    while(x-y>e)
    {
     x= (x+y)/2;
     y = n/x;           
                
                }
    return x;
    
    }

int main()
{
    float num=7,ans;
   ans = printsquareroot(num);
   printf("%f",ans);
    getch();
    
    }
