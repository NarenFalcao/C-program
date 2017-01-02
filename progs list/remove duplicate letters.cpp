#include<stdio.h>
#include<conio.h>
using namespace std;


char *removeduplicates(char *s)
{
     bool arrhash[256] = {0};
     int ip_index=0,res_index=0;
     while(*(s+ip_index))
     {
                 if(arrhash[*(s+ip_index)]!=1)
                 {
                                              arrhash[*(s+ip_index)]=1;
                                              *(s+res_index) = *(s+ip_index);
                                              res_index++;
                                              
                                              }        
                         ip_index++;
                         
                         }
                         *(s+res_index)='\0';
     return s;
     
     
     }

int main()
{
    char s[] = "narendra kumar";
   printf("%s", removeduplicates(s));
    getch();
    
    }
