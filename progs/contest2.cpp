#include<iostream>
#include<conio.h>
using namespace std;
char a[100][100];
int checkwater(char arr[100][100],int a,int b,int lat,int lon,int count)
{
   //  for(int i=0;i<a;i++)
   // for(int j=0;j<b;j++)
   // cout<<arr[i][j];
   

           if(arr[lat][lon]=='0' && lat<a && lon < b)
           {
                                 
           count++;
        count =    checkwater(arr,a,b,lat+1,lon,count);
        count =    checkwater(arr,a,b,lat,lon+1,count);
    
        
           }
           
 
           




return count;


   
   
   
    
    }

int main()

{
    int L,H,t,lat,lon,ans;
    cin>>L;
    cin>>H;
   
    for(int i=0;i<L;i++)
    for(int j=0;j<H;j++)
    cin>>a[i][j];
    
cin>>t;
while(t!=0)
{
           cin>>lat>>lon;
           ans= checkwater(a,L,H,lat,lon,0);
            t--;
            }
            cout<<ans;
           
    getch();
    }
