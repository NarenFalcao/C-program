#include <stdio.h>
int k;
void crackle();
void foo();

void crackle()
{
if (k < 4) {
k = k + 1;
}
printf ( " % d \ n " , k);
}
void foo()
{
int k;
k = 0;
{
int k;
k = 5;
crackle();
}
printf ( " % d \ n " , k);
crackle();
}
int main ()
{
k = 1;
crackle();
foo();
crackle();
return 0;
}

