#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;



int arr[100],r=0;
struct node
{
       int data;
       struct node *left;
       struct node *right;
       
       };
void quickSort(int A[], int si, int ei);       
struct node *newnode(int a)
{
      
       
       }

void insert(struct node **root,int a)
{
   
     struct node *temp;
    
     if((*root)==NULL)
   {
       (*root) = (struct node*)malloc(sizeof(struct node));
       (*root)->data = a;
       (*root)->left = (*root)->right = NULL;
      
                      
                      }
   
     
     else
     {
     
     if(a <= (*root)->data)
  insert(&((*root)->left),a);
     
   if (a > (*root)->data)
  insert(&((*root)->right),a);
    else
    {
        return;} 
  
     }
     }

void print_tree(struct node *node)
{
    
     if(node!=NULL)
   
     { 
         print_tree(node->left);
         printf("%d",node->data);
        print_tree(node->right);
         
         
         
         }

     
     }
     
void getinarray(struct node *node)
{
     if(node!=NULL)
     {
                    
               
                
             
                getinarray(node->left);
                arr[r] = node->data;
                r++;
             //   printf("\n%d",arr[r]);
               getinarray(node->right);
               
                    
                      }
     
     }
     
int countnodes(struct node *node)
{
    int c=0;
    if(node!=NULL)
    c= 1+countnodes(node->left)+countnodes(node->right);
    return c;
    }
    
int haspair(int arr[],int num,int size)
{
     int i=0;
     quickSort(arr,0,size-1);
     int l=0,r=size-1;
     while(l<r)
     {
               if(arr[l]+arr[r] == num)
               {i++;l++;r--;}
               else if(arr[l]+arr[r] < num)
               l++;
               else if (arr[l]+arr[r] > num)
               r--;
               
               }
     return i;
     
     }


void exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a   = *b;
    *b   = temp;
}
 
int partition(int A[], int si, int ei)
{
    int x = A[ei];
    int i = (si - 1);
    int j;
 
    for (j = si; j <= ei - 1; j++)
    {
        if(A[j] <= x)
        {
            i++;
            exchange(&A[i], &A[j]);
        }
    }
    exchange (&A[i + 1], &A[ei]);
    return (i + 1);
}
 
/* Implementation of Quick Sort
A[] --> Array to be sorted
si  --> Starting index
ei  --> Ending index
*/
void quickSort(int A[], int si, int ei)
{
    int pi;    /* Partitioning index */
    if(si < ei)
    {
        pi = partition(A, si, ei);
        quickSort(A, si, pi - 1);
        quickSort(A, pi + 1, ei);
    }
}
    

     
int main()
{
    struct node *root = NULL;int flag;
    int count=0,c,cn;int num=6;
insert(&root,4);
 insert(&root,2);
 insert(&root,6);
 insert(&root,1);
 insert(&root,3);
  insert(&root,5);
   insert(&root,7);
   
  

   
  
   cn = countnodes(root);

 
     print_tree(root);
     getinarray(root);


    for(int j=0;j<cn;j++)
printf("\n%d",arr[j]);
     
     flag = haspair(arr,num,cn);
   
    printf("%d pairs exists",flag);
  
   
  
    getch();
    
    
    
    }
