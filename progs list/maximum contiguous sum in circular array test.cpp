#include<stdio.h>
#include<conio.h>
using namespace std;

int kadanes(int arr[],int n)
{
   int m1=0,m2=0;
   for(int i=0;i<n;i++)
   {
           m1 = m1+arr[i];
           if(m1 <0)
           m1 = 0;
           if(m2<m1)
           m2=m1;
           }
   return m2;
    
    }

int main()
{
    int arr[] = {11,10,-20,5,-3,-5,8,-13,-10};
    int size = sizeof(arr)/sizeof(arr[0]);
   int ans =  kadanes(arr,size);
    printf("%d",ans);
    getch();
    
    
    }
