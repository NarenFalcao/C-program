#include<iostream>
using namespace std;
// Reverse the characters between pointer p and q
void ReverseWord(char* p, char* q)
{
    while(p < q)
    {
        char t = *p ;
        *p++   = *q ;
        *q--   = t ;
    }
}


// Reverse all words in a sentence.
void ReverseSentence(char *s)
{
    char *p = s ;   // point to the start position of a word
    char *q = s ;   // point to the end position of a word(white space or '\0')

    while(*q != '\0') // While string not ends
    {
        if (*q == ' ') // Get a word?
        {
            ReverseWord(p, q - 1) ;
            q++ ; // move to next word
            p = q ;
        }
        else
            q++ ;
    }

    ReverseWord(p, q - 1) ; // Reverse the last word
}

int main()
{
	char a[100] = "hello how are you?";
	ReverseSentence(a);
	printf("%s",a);
	return 0;
	
}
