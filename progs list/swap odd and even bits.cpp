#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=23;
    unsigned int even_bits = x & 0xAAAAAAAA;
    unsigned int odd_bits = x & 0x55555555;
    
    even_bits>>=1;
    odd_bits <<=1;
    
    int y = (even_bits | odd_bits);
    cout<<y;
    getch();
    
    
    
    }
