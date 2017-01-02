#include<iostream>
using namespace std;

void findlist(int arr[], int n, int j,int i){
	int target = n;
	int size = sizeof(arr)/sizeof(arr[0]);

	int *ans;
if(target>0 && i<size){
		target = target - arr[i];
		ans[j] = arr[i];
		
		findlist(arr,target,j++,i);
		
	
		
	}
		i++;
			findlist(arr,target,j++,i);
	
}

// 2,3,6,7    7

int main()
{
	int n,target;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cin>>target;
	findlist(arr,target);
	return 0;
}
