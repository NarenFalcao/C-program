#include<stdio.h>
#include<conio.h>
using namespace std;

void bin(unsigned n)
{
     unsigned i;
     for(i=1<<31;i>0;i = i/2)
     (i & n)?printf("1"):printf("0");
     
     }
int main(void)
{
    bin(7);
    printf("\n");
    bin(4);
getch();
}
