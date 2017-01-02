#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;


struct petroldist
{
       int petrol;
       int distance;
       };
int findcirclestop( struct petroldist arr[],int size)
{
    int start = 0;
    int end =1;
    
    int curr_petrol = arr[start].petrol - arr[start].distance;
    
    while(curr_petrol<0 || start!=end)
    {
                        while(curr_petrol<0 &&start!=end)
                        {
                                            curr_petrol -= arr[start].petrol - arr[start].distance;
                                            start = (start+1)%size;
                                            
                                            if(start == 0)
                                            return -1;
                                            
                                            }
                        curr_petrol  += arr[end].petrol - arr[end].distance ;
                        end = (end+1)%size;
                        
                        }
    
    return start;
    }      


int main()
{
    struct petroldist arr[] = {{4,6},{6,5},{7,3},{4,5}};
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = findcirclestop(arr,size);
    (ans == -1)? printf("not possible") : printf("start = %d",ans);
    getch();
    
    
    }
