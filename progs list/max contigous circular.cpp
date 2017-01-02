#include<stdio.h>
#include<conio.h>
using namespace std;
int kadanes(int arr[],int n);
int findcontiguouscircular(int arr[],int n)
{
    int kadanes_max = kadanes(arr,n);
    int max_wrap =0;
    for(int i=0;i<n;i++)
    {
            max_wrap += arr[i];
            arr[i] = -arr[i];
            }
  printf("%d\n",kadanes(arr,n));
    
    max_wrap = max_wrap +  kadanes(arr,n);
    printf("%d\n",max_wrap);
    return (max_wrap>kadanes_max)? max_wrap:kadanes_max;
    
    }



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
    int arr[] = {11,10,-20,5,-3,-5,8,-13,10};
    int size = sizeof(arr)/sizeof(arr[0]);
   int ans =  findcontiguouscircular(arr,size);
    printf("contiguous circular sum::::%d",ans);
    getch();
    
    
    }
