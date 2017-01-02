#include<stdio.h>
#include<conio.h>
using namespace std;


void towerofhanoi(int n,char from,char to,char aux)
{
     
     if(n==1)
     {
     printf("\n Move the disk 1 from peg %c to peg %c",from,to);
     return;
     }
     
     towerofhanoi(n-1,from,aux,to);
     
     printf("\n Move the disk %d from peg %c to peg %c",n,from,to);
     
     towerofhanoi(n-1,aux,to,from);
     
     
     }

int main()
{
    int n;
    printf("\n enter the no of disk");
    scanf("%d",&n);
    towerofhanoi(n,'A','C','B');
    getch();
    
    
    }
