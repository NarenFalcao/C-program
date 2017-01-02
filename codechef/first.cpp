#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    float bal;int withdraw;
    scanf("%d",&withdraw);
    scanf("%f",&bal);
    if(withdraw%5 == 0 && bal > withdraw)
    {
                  bal = bal-(withdraw+0.5);
                     
  
                  }
    printf("%4f",bal);
    getch();
    
    
    }
