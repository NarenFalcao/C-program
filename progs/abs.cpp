#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    int a[3] = {1,30,40};
    a[abs(a[0])] = -a[abs(a[0])]; 
    printf("%d",a[abs(a[0])]);
    getch();
    
    }
