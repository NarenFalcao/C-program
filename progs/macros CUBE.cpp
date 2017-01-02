#include<iostream>
#include<conio.h>

using namespace std;



int main()
{
    int x = 1,y;

    y = ++x*++x*++x*++x*++x;
    printf("%d %d",x,y);
    getch();
    }
