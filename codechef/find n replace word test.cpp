#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

void findnreplace(string &source,string const& find,string const&replace)
{
             for(string::size_type i=0;(i=source.find(find,i))!=string::npos;)
             {
                                   source.replace(i,find.length(),replace);
                                   i+=replace.length()-find.length()+1;
                                   
                                   }
                    
                    }

int main()
{
    string s("zoho is the best");
    findnreplace(s,"zoho","test1");
    cout<<s;
    getch();
    
    
    }
