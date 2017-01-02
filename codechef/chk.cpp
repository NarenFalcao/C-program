#include<stdio.h>
#include<conio.h>
using namespace std;
int gcd(long m,long n)
{
     while(n!=0)
     {
                int t=m%n;
                m=n;
                n=t;
                
                }
     return m;
     }


int main()

{
   int a = gcd(5,10);
   printf("%d",a);
   getch();
    }
