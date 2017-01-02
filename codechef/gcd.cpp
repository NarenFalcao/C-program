#include<stdio.h>
#include<conio.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
    
    }
int main()
{
    int t,n,num1,num2;
   scanf("%d",&t);
   while(t!=0)
   {
              int count=0;
               scanf("%d",&n);
              for(int i=1;i<=n;i++)
              for(int j=1;j<=n;j++)
              if( gcd(i,j) == j)
              count++;
              printf("%d/%d",count,n*n);
    
t--;
}           
    
    getch();
    }
