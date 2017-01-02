#include<stdio.h>
int kadanesalgo(int numbers[])
{
     int max_so_far  = numbers[0], max_ending_here = numbers[0];
 
        // OPTIONAL: These variables can be added in to track the position of the subarray
        // size_t begin = 0;
        // size_t begin_temp = 0;
        // size_t end = 0;
 
        // Find sequence by looping through
        for(int i = 1; i < 9; i++)
        {
                // calculate max_ending_here
                if(max_ending_here < 0)
                {
                        max_ending_here = numbers[i];
 
                        // begin_temp = i;
                }
                else
                {
                        max_ending_here += numbers[i];
                }
 
                // calculate max_so_far
                if(max_ending_here >= max_so_far )
                {
                        max_so_far  = max_ending_here;
 
                        // begin = begin_temp;
                        // end = i;
                }
        }
      //  printf("%d",max_so_far);
        return max_so_far ;
     
     
 }
 int main()
 {
     int arr[10],i,max;
     for(i=0;i<9;i++)
     scanf("%d",&arr[i]);
    max =  kadanesalgo(arr);
    printf("%d",max);
     scanf("%d",&i);
}
