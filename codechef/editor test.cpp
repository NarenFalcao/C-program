#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int i,j,ec,fg,ec2;
char fn[20],e,c;
FILE *fp1,*fp2,*fp;
void Create();
void Append();
void Delete();
void Display();
int main()
{
do {

printf("\n\t\t***** TEXT EDITOR *****");
printf("\n\n\tMENU:\n\t—–\n ");
printf("\n\t1.CREATE\n\t2.DISPLAY\n\t3.APPEND\n\t4.DELETE\n\t5.EXIT\n");
printf("\n\tEnter your choice: ");
scanf("%d",&ec);
switch(ec)
{
case 1:
Create();
break;
case 2:
Display();

break;
case 3:
Append();
break;
case 4:
Delete();
break;
case 5:
exit(0);
}
}while(1);
}


void Create()
{
     
     fp1 = fopen("temp2.txt","w");
        printf("Enter the text and press '.' to save\n\n\t");
     while(1)
     {
          
             c = getchar();
             fputc(c,fp1);
             if(c == '.')
             {
                  fclose(fp1);
                  printf("\n Enter the file name:");
                  scanf("%s",fn);
                  fp2 = fopen(fn,"w");
                  fp1 = fopen("temp2.txt","r");
                  while(!feof(fp1))
                  {
                                   c = getc(fp1);
                                   putc(c,fp2);
                                   }
                fclose(fp1);
                  fclose(fp2);
                  break;
                  
                  }
             
             }
       
     
     }
void Display()
{
     printf("\n enter the file name:");
     scanf("%s",fn);
     fp1= fopen(fn,"r");
     if(fp1 == NULL)
     {
     printf("\n No file found");
     goto end1;
     }
     
         while(!feof(fp1))
         {
                          c = getc(fp1);
                          printf("%c",c);
                          
                          }
         
         end1:
fclose(fp1);
printf("\n\n\tPress any key to continue…");
getch();
     
   
     
     }

void Delete()
{
     printf("\n Enter the file name to delete");
     scanf("%s",fn);
     fp1 = fopen(fn,"r");
     if(fp1 == NULL)
     {
     printf("\n File not found");
     goto end4;
     }
     fclose(fp1);
     if(remove(fn)==0)
     {
                      printf("\n File removed succesfully");
                      goto end4;
                      }
     else
     {printf("\n ERROR");
         }
     end4: printf("\n\n\tPress any key to continue…");
getch();
fclose(fp1);
     }

void Append()
{
     printf("\n Enter the file name:");
     scanf("%s",fn);
     fp1 = fopen(fn,"r");
     if(fp1==NULL)
{
printf("\n\tFile not found!");
goto end3;
}
     while(!feof(fp1))
     {
                     c = getc(fp1);
                     printf("%c",c);
                     
                     }
                     fclose(fp1);
     printf("\n ENter the text to insert , press CTRL + S to save");
     fp1=fopen(fn,"a");
     while(1)
     {
             c = getch();
            if (c==19)
            goto end3;
             if(c == 13)
             {
                  c='\n';
                  printf("\n");
                  fputc(c,fp1);
                  
                  
                  }
             else
             {
                 printf("%c",c);
                 fputc(c,fp1);
                 
                 }
             
             
             
             }
     
  end3: fclose(fp1);
getch();
     }
