#include<stdio.h>
#include<conio.h>
using namespace std;
void swap(int *a,int *b);
void evenreplace(int a[],int size)
{
     int i,j=0,count=size-1;
   
     for(i=0;i<size;i++)
     {
            if(a[i]%2==0)
            a[i]=0;
            else if(a[i]%2!=0)
            {
            swap(&a[i],&a[j]);
            j++;
            }
    
}
     
      for(i=0;i<size;i++)
      printf("%d",a[i]);
     }
void swap(int *a,int *b)
{
     int t=*a;
     *a=*b;
     *b=t;
     
     }


int main()
{
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    evenreplace(a,size);
    getch();
    
    
    }
