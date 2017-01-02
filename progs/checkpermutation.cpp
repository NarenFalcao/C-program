#include<stdio.h>
#include<conio.h>
int partition(char arr[],int,int);
void swap(char *a,char *b);
void quicksort( char arr[] , int l , int h)
{
     if(l<h)
     {
     int p = partition(arr,l,h);
     quicksort(arr,l,p-1);
     quicksort(arr,p+1,h);

}}
int partition(char arr[],int l,int h)
{
    int x = arr[h];
    int i = l-1;
    for(int j=l;j<= h-1;j++)
    {
            if(arr[j]<=x)
            {
                         i++;
                         swap(&arr[i],&arr[j]);
                         
                         }
         
            }
       swap(&arr[i+1],&arr[h]);
    return (i+1);
    
    }
void swap(char *a,char *b)
{
     int t = *a;
     *a = *b;
     *b = t;
     
     }
void printArr( char arr[], int n )
{
    int i;
    for ( i = 0; i < n; ++i )
        printf( "%c ", arr[i] );
}

int main()
{
    char arr[] = "BCAC";
    char arr1[] = "CCABA";
    int val;
    
     int n = sizeof( arr ) / sizeof( *arr );
       int n1 = sizeof( arr1 ) / sizeof( *arr1 );
       if(n==n1)
       {
    quicksort(arr,0,n-1);
     quicksort(arr1,0,n-1);
     for(int i=0;i<n-1;i++)
     {if(arr[i]!=arr1[i])
     {
                         val=0;
                         break;
                         }
            else{
                 val=1;
                 }
             }
    if(val==1)
    printf("perm");
    else
    printf("not perm");
  //  for(int i=0;i<8;i++)
   // printf("%d",arr[i]);
   
}
else
 printf("not perm");
    getch();
    
    }
