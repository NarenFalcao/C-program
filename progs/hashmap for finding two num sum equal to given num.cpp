#include<stdio.h>
#include<conio.h>
using namespace std;


void printpair(int arr[],int sum,int size)
{
     if(size==0)
     return;
     
     int hmap[10000] = {0};
     int temp;
     
     for(int i=0;i<=size-1;i++)
     {
             temp = sum - arr[i];
             if(temp>=0 && hmap[temp] == 1)
             printf("%d %d",arr[i],temp);
             
             hmap[arr[i]] = 1;
             
             
             }
     
     
     
     }

int main()
{
    int arr[] = {6,2,1,3,4,0,5};
    int sum = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
  //  printf("%d",size);
    printpair(arr,sum,size);
    getch();
    
    
    }
