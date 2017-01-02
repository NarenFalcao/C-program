#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define char_index(c) ((int)c - (int)'a')
#define size(a) sizeof(a)/sizeof(a[0])
using namespace std;

struct trie_node
{
       int value;
       struct trie_node *children[26];
       
       };
struct trie
{
       int count;
       struct trie_node *root;
       };

struct trie_node *getnode(void)
{
       struct trie_node *p = (struct trie_node *)malloc(sizeof(struct trie_node));
       if(p)
       {
            p->value = 0;
            for(int i=0;i<26;i++)
            p->children[i]=NULL;
            
            }
       return p;
       }       
void initialise(struct trie *ptrie)
{
     ptrie->root = getnode();
     ptrie->count = 0;
     }
void insert(struct trie *ptrie,char key[])
{
     int length = strlen(key);
     int index;
     struct trie_node *n = ptrie->root;
     ptrie->count++;
     for(int i=0;i<length;i++)
     {
             index = char_index(key[i]);
             if(!n->children[index])
             n->children[index] = getnode();
             
             n = n->children[index];
             }
     n->value = ptrie->count;
     }

int search(struct trie *ptrie , char key[])
{
    int length = strlen(key);
    int index;
    struct trie_node *n = ptrie->root;
    
    for(int i=0;i<length;i++)
    {
            index = char_index(key[i]);
            if(!n->children[index])
            return 0;
            
            n = n->children[index];
            
            }
   return 1;
    }
    
int main()
{
    struct trie ptrie;
     char keys[][5] = {"the", "a", "thea", "answ"};
    initialise(&ptrie);
    char output[][32] = {"Not present in trie", "Present in trie"};
 
    for(int i=0;i< size(keys);i++)
    {
           
            insert(&ptrie,keys[i]);
            }
           
    printf("%s --- %s\n", "the", output[search(&ptrie, "the")] );
    printf("%s --- %s\n", "these", output[search(&ptrie, "these")] );
    printf("%s --- %s\n", "their", output[search(&ptrie, "answ")] );
    printf("%s --- %s\n", "thaw", output[search(&ptrie, "thaw")] );
    
    getch();
    
    }
