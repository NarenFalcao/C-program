#include<iostream>
#include<stack>
#include<conio.h>
using namespace std;

void countspan(int arr[],int s[],int size)
{
     stack <int> st;
     st.push(0);
     
     s[0]=1;
     
     for(int i=1;i<size;i++)
     {
             
             while(!st.empty()&&(arr[st.top()]<arr[i]))
             {
                                                       
                                                       st.pop();
                                                       }
             s[i] = st.empty()? i+1 : i-st.top();
     st.push(i);
             }
     
     
     for(int k=0;k<size;k++)
     cout<<s[k]<<endl;
     
     }



int main()
{
    int arr[] = { 10,4,5,90,120,80};
    int size = sizeof(arr)/sizeof(arr[0]);
    //printf("%d",size);
    int s[size];
    countspan(arr,s,size);
    getch();
    
    }
