#include <stdio.h>
#include<conio.h>

int main ()
{
   FILE *fp;

   fp = fopen("fseek.txt","w+");
   fputs("This is tutorialspoint.com", fp);
  
   fseek( fp, 7, SEEK_SET );
   fputs(" C Programming Langauge", fp);
   fclose(fp);
   getch();
   return(0);
}
