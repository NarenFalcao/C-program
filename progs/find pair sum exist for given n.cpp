#include<stdio.h>
#include<conio.h>
using namespace std;
void quickSort(int a[], int si, int ei);
bool haspair(int arr[],int num,int size)
{
     
     quickSort(arr,0,size-1);
     int l=0,r=size-1;
     while(l<r)
     {
               if(arr[l]+arr[r] == num)
               return true;
               else if(arr[l]+arr[r] < num)
               l++;
               else if (arr[l]+arr[r] > num)
               r--;
               
               }
     return false;
     
     }



int main()
{
    int a[] = {1, 4, 45, 6, 10, -8};bool flag;
    int num=16;
    int arr_size=6;
    flag = haspair(a,num,arr_size);
    if(flag)
    printf("exists");
    getch();
    
    
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
