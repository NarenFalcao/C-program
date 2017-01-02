#include <stdio.h>


int i;


int p(int y)


{


int j = y;


i++;


return j + y;


}




void q()


{


int j = 2;


i = 0;


printf("%d\n", p(i+j));

}




int main()


{


q();


return 0;

}
