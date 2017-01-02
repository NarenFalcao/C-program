#include<stdio.h>
#include<conio.h>

using namespace std;

void spiralPrint(int m,int n,int arr[5][5])
{
     int k=0,l=0,i;
     
     while(k<m && l<n)
     {
               for(i=l;i<n;++i)
               {
                               printf("%d",arr[k][i]);
                               
                               }
                               k++;
               for(i=k;i<m;++i)
               {
                               printf("%d",arr[i][n-1]);
                               
                               }
                               n--;
               if(k<m)
               {
                      for(i=n-1;i>=l;--i)
                      {
                                         printf("%d",arr[m-1][i]);
                                        
                                         }
                                          m--;
                      }
               if(l<n)
               {
                      for(i=m-1;i>=k;--i)
                      {
                                         printf("%d",arr[i][l]);
                                         
                                         }
                                         l++;
                      
                      }
               
               
               }
     
     
     }



int main()
{
    int a[5][5] = { {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
 
    spiralPrint(5, 5, a);
   
    getch();
}
