#include "stdio.h"
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    FILE *fp,*fp1;
    char str[80];
    char str1[80];
    
    fp = fopen("trial.txt","r");
      fp1 = fopen("trial1.txt","w");
    while(fgets(str,80,fp)!=NULL)
    {
                               fputs ( str, stdout ); /* write the line */
                                 strcpy(str1, str);
                                   fprintf (fp1 , str1);
                                 }
    fclose(fp);
    getch();
    }
