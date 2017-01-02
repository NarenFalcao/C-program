#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    FILE *fp1,*fp2;
    fp1 = fopen("trial.txt","r");
    fp2 = fopen("trial1.txt","w");
    char str[80];
    char str1[80];
    while(fgets(str,80,fp1)!=NULL)
    {
                                 fputs(str,stdout);
                                 strcpy(str1,str);
                                 fprintf(fp2,str1);
                                 
                                 }
    fclose(fp1);
    fclose(fp2);
    getch();
    
    }
