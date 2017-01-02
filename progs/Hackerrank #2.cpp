#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int k,n,sum=0;
    int count=0;
     fscanf(stdin,"%d",&n);
    fscanf(stdin,"%d",&k);
    
   int price[n];
    for(int i=0;i<n;i++)
    {fscanf(stdin,"%d",&price[i]);
       }
       for(int i=0;i<n;i++)
        if((sum+price[i])<=k)
        {
        sum+=price[i];
            count++;
        }
    fprintf(stdout,"%d",count);
   // fprintf(stdout,"%d",sum);
    return 0;
}
