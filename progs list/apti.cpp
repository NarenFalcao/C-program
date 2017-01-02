#include<stdio.h>
#include<conio.h>
using namespace std;
/*
union xyz
{
        char a[2];
      int i;
    
      
      };
union xyz b;*/
int main()
{
    /*int i;
    for(i=3;i<15;i+=3);
    printf("%d",i);*/
  
  
  /*  int a=0;
    int i=3;
    int *p = &i;
    printf("%d %d %d %d %d %d", i, ++i , i , i++, *p++ ,++*p); //        6 6 5 4 4 4
   */
  
  /* char c = 'a';
   printf("%d %d",sizeof('n'),sizeof('a'));*/
   
  /* int i=10;
   switch(i)
   {
            case 1: printf("hi");
                     break;
            case 5*2:  printf("naren");
                     break;
            }*/
  /* b.i = 512;
   b.a[0] = 3;
  
   
   printf("%d",b.i);*/
  
  /* int i=3;
   -i;
   printf("%d",i);*/
 
   char str[] = "hello\0samsung\0india";
   printf("%d\n%d\n%d",sizeof(str),sizeof(str+0),sizeof(str+13));
    getch();
    
    
    
    }
