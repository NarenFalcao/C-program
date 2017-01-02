#include <limits.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define sqr(x) x*x
int main()
{
 /* unsigned int max_unsigned_int_size = UINT_MAX;

  printf("%u",max_unsigned_int_size);
  double max = pow(2,15);
  printf("\n%ld",max);
  */
  
 /* unsigned int i=-1;
            int j = -4;
            printf("%u", i+j);*/
            
           // printf("%d",printf("india"));


//printf("%d",sqr(3-5));
  
 /* int i=512;
  char *c = (char *)&i;
  c[0]=3;
  printf("%d",i);*/
  
  /*char *s = "hello\0world\0!!";
  printf("%d",strlen(s));
  s=s+6;
  printf("%d",strlen(s));
  s=s+7;
  printf("%s",s+1);
  */
  
  int j=3;
int *p=&j;
printf("%d %d", *p++,++*p);
  
  getch();  
    }
