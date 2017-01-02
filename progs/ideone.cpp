#include<stdio.h>
#include<iostream> 
#include<string.h>
#include<conio.h>
 
using namespace std; 
 
int main()
{ 
    int a=1,b=2;
    char * str = "hello", * s2 = "I am not going to print";
        char * ptr = str; 
        char least = 127;
       // printf("hi");
         while (*ptr++) 
        { 
                least = ( *ptr < least ) ? * ptr : least;
                printf("Testing: %c , %c\n",least, *ptr); 
        } 
        printf("With C: %s\n", ptr);
        printf("With C: %s\n", ptr, ptr += strlen(ptr)+1);  
    //    printf("%d",a,a+=b);
        getch();
}
