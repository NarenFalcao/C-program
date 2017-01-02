// Read inputs from stdin. Write outputs to stdout.

#include <iostream>
#include <string>
#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    int n,num,i=0,minp,minn=0,ans;
	cin >> n;
    if(n==0)
    return 0;
    int temp[n];
    num =n;
while(num!=0)
{
    cin>>temp[i];
    num--;
    i++;
}

minp = temp[0]*temp[0];
    
    
for(int j=1;j<n;j++)
{
    
    
    if((temp[j]*temp[j])<minp)
    minp = (temp[j]*temp[j]);
    

    
    
}
for(int k=0;k*k<=minp;k++)
{ans = k;}
printf("%d",ans);
}

