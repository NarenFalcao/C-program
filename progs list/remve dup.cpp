#include<iostream>
#include<conio.h>
#include<map>
#include<string>
using namespace std;

int main()
{
    char *s = "hi hi hi naren naren naren";
    char delim[] = " ";
    char *str1 = new char[strlen(s)+1];
    strcpy(str1,s);
    map<string,int> mhash;
    char *token = strtok(str1,delim);
    while(token!=NULL)
    {
                      mhash.insert(pair<string,int>(token,1));
                      token = strtok(NULL,delim);
                      }
    map<string,int>::iterator iter;
    for(iter = mhash.begin();iter!=mhash.end();iter++)
    {
             cout<<(*iter).first<<endl;
             
             }
    getch();
    }
