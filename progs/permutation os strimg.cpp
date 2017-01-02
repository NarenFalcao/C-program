#include<stdio.h>
#include<conio.h>

void swap (char *x, char *y)

{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  
/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */
void permute(char *a, int i, int n) 
{
   int j; 
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          //printf("%c"
          permute(a, i+1, n);
          swap((a+i), (a+j)); //backtrack
       }
   }
} 
 
/* Driver program to test above functions */
int main()
{
   char a[] = "ABCD";  
   permute(a, 0, 3);
   getchar();
   getch();
   return 0;
}
