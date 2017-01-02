#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int a=30;
    int m=7;
    a%=m;
    for(int x=1;x<m;x++)
    if((a*x)%m==1)
    printf("%d",x);
    getch();
    
    
    
    
    
    }
