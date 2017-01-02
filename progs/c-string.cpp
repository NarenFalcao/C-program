#include<stdio.h>
#include<conio.h>


void reverse(char *string) {
char * end = string;
char *str = string;
 char tmp;
 if (str) {
 while (*end) {
 ++end;
 }
 --end;
 //printf("%s",end);
 while (str < end) {
 tmp = *str;
 *str++ = *end;
 *end-- = tmp;
 }
puts(string);
 }

 }
 int main()
 {int a;
     char arr[16]= "narendrak hi";
     reverse(arr);
     scanf("%d",&a);
     }
