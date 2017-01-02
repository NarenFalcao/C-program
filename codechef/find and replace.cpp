#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


void find_and_replace(string& source,string const& find,string const& replace)
{
    for(string::size_type i = 0; (i = source.find(find, i)) != string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length() - find.length() + 1;
    }
}
 
int main()
{
string s("zoho is well known company. ZoHo corporation has more  employees.");
find_and_replace(s, "zoho", "test");
find_and_replace(s, "ZoHo", "TeSt");
cout<<s;
getch();
}
