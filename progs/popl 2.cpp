#include<iostream>
using namespace std;
int a,b;
int& g(float b);
int& f() 
{return a;
}
int& g() {return a;}
int main(){
	
	a = 4, b = 5;


g() = 6;
f() = g();
}
