#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char name[20];
    FILE *fp,*fp1;char c;
    fp = fopen("temp1.txt","w");
    while(1)
    {
            c = getchar();
            fputc(c,fp);
            if(c == '.')
            {
                 fclose(fp);
                 printf("\n Enter the name for the file:");
                 scanf("%s",name);
                 fp = fopen("temp.txt","r");
                 fp1 = fopen(name,"w");
                 while(!feof(fp))
                 {
                                 c = getc(fp);
                                 putc(c,fp1);
                                 
                                 }
                                 fclose(fp1);
                                 
                 
                 }
            
            
            }
    
    
    }
