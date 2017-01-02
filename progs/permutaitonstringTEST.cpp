#include<stdio.h>
#include<conio.h>
void swap(char *a,char *b)
{
     int t=*a;
     *a=*b;
     *b=t;
     
     }
void permute(char a[],int start,int end)
{
     if(start == end)
     printf("%s\n",a);
     for(int j=start;j<=end;j++)
     {
             swap((a+start) , (a+j));
             permute(a,start+1,end);
             swap((a+start) , (a+j));
             }
     
     
     }

int main()
{
    char a[] = "ABCD";
    permute(a,0,3);
    getch();
    }
