#include <stdio.h>
#include <stdlib.h>
 
void printRepeat(int arr[], int size)
{
  int i,j;
  static int array[12];
  
  for (i = 0; i < size; i++)
  {
    if (arr[abs(arr[i])] >= 0)
      {arr[abs(arr[i])] = -arr[abs(arr[i])];
     array[abs(arr[i])]++;
      }
    else
      
   array[abs(arr[i])]++;
  }
  
    printf("\nthe array elements count");
  for (i = 0; i < size; i++)
  {

  printf("%d",array[i]);
}
  
  for (j = 0; j < size; j++)
  {
      if(array[j] >= size/2)
      {
      printf("\nThe num %d has repetition more dan n/2",j);
     
      }
      }
      
}
 
int main()
{
  int arr[] = {1, 2,6, 3, 4, 6, 6 , 1 , 6 ,6 ,6 ,6 };
  int arr_size = sizeof(arr)/sizeof(arr[0]);
 printRepeat(arr, arr_size);
  getchar();
  return 0;
}
