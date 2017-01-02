# include <stdlib.h>
#include<iostream>
using namespace std;
int main ()
{
char *** p; // memory w
char ** q; // memory x
char * w; // memory y
char x; // memory z
q = ( char **) malloc ( sizeof ( char *)); // memory 1

w = ( char *) malloc ( sizeof ( char )); // memory 2
x = 'x';
p = &q;
// point 1

*p = &w;
***p = x;
x = 'p';
// point 2
printf("%d %d",*p,q);
}
