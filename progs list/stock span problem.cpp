#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;


void countspan(int arr[],int s[],int size)
{
     s[0]=1;
     for(int i=0;i<size;i++)
     {
             s[i]=1;
             for(int j=i-1;(j>=0)&&(arr[i]>=arr[j]);j--)
             {
                     s[i]++;
                     }
             
             }
     
     for(int k=0;k<size;k++)
     printf("%d\t",s[k]);
     }

int main()
{
    int arr[] = { 10,4,5,90,120,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    int s[size];
    countspan(arr,s,size);
    getch();
    
    }

