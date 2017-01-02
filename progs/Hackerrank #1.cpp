#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100000
using namespace std;

int strchk(char *arr,char *str)
{
 //   printf("\n%s",arr);
   // printf("\n%s",str);
   int count=0;
   while(*arr != '\0')
   {
   if(*arr++ == *str++)
   {
                     count++;
                     
                     }
                     else
                     break;
                   
                    
                    }               
   return count;
    
    }

int main()
{
    int t;
    fscanf(stdin, "%d", &t);
    while(t!=0)
    {
    char *str = (char *)malloc(100000);
  (void)  fscanf(stdin, "%s", str);
    char *strc = (char *)malloc(100000);
    int sum=0;
    strcpy(strc,str);
    int len = strlen(str)-1;
    int c[len];
    int j=0;
    char *arr[len];
    for(int i=0;i<=len;i++)
    {
    	
   arr[i] = strc++;
   printf("\n%s %s",arr[i], strc);
   sum+= strchk(arr[i],str);
 
    }
    fprintf(stdout,"%d",sum);
t--;
}
    getch();
    
    }
