#include<stdio.h>
#include<conio.h>
using namespace std;

int kadanes(int arr[],int size)
{
    
   int m1=0,m2=0;
  for(int i=0;i<size;i++)
  {
          m1 = m1+arr[i];
          if(m1<0)
          m1=0;
          if(m1>=m2)
          m2=m1;
          
          }
 return m2;

    }

int main()
{
 int a[] = {1,2,3,4,-2,3,4};
 int size = sizeof(a)/sizeof(a[0]);
 int ans = kadanes(a,size);    
    printf("%d",ans);
    getch();
    
    }
