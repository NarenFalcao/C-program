#include<stdio.h>
#include<conio.h>
#include<string.h>
void decrypt(char arr[]);
char hashdecrypt(char arr[],int len)
{
     int i=0,j=0;char final[len];
  for(i=0;i<len;i++)
  if(arr[i] != '-')
  {
  final[j] = arr[i];
  j++;
} 


decrypt(final);


     }
     
void decrypt(char arr1[])
 {
     for(int i=0;i<15;i++)
     {
    if(arr1[i] == 'C' || arr1[i] == 'c' || arr1[i] == 'A' || arr1[i] == 'a')
      arr1[i] = '2';
      if(arr1[i] == 'O' || arr1[i] == 'o' || arr1[i] == 'M' || arr1[i] == 'm')
      arr1[i] = '6';
      if(arr1[i] == 'S' || arr1[i] == 's')
      arr1[i] = '7';
       if(arr1[i] == 'T' || arr1[i] == 't')
      arr1[i] = '8';
      }
       printf("%s",arr1);
      }    
     


int main()
{
    char str[15] = "1-800-COM-CAST";
    hashdecrypt(str,15);
    getch();
    
    }
