#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;

void replace(int de,char s[],char str1[]);
void findnreplace(char s[],char str1[],char str2[])
{
     int cnt;
                  int length = strlen(s)-1;
                  int l=strlen(str1)-1;
                  printf("%d",l);
                  
                  for(int i=0;i<length;i++)
                  {
                          cnt=0;
                    for(int j=0;j<l;j++)
                    {
                            
                            if(str1[j]==s[i+j])
                            {
                                               cnt++;
                                               
                                               }
                                             
                            
                            }
                            printf("%d",cnt);
                            if(cnt == l+1)
                            {
                                   replace(i,s,str1);
                                   }
                                     }
                  
                  }
void replace(int de,char s[],char str1[])
{
     int j=0,i;
     for(i=de;i<(de+strlen(str1));i++)
     {
     s[i]=str1[j];
     j++;
     }
     
     
     }
int main()
{
    char s[] = "zoho is well known company. zoho corporation has more  employees";
    char str1[] = "zoho";
    char str2[] = "test";
    
    findnreplace(s,str1,str2);
    
  
    printf("%s",s);
    
    getch();
    }
