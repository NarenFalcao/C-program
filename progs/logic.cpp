#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x=0;
for(int i=1;i<=5;i++)
x = x+i%2==0?i*1:i*-1;
cout<<x;
getch();
}
//-1 -2 -3 -4 -5
