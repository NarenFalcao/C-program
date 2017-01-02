#include<iostream>
using namespace std;

int left(int i){
	return (2*i + 1);
}

int right(int i){
	return (2*i + 2);
}


void heapify(int arr[], int n,int i){
	int largest = i;
	int l = left(i);
	int r = right(i);
	
	if(l<n && arr[l]>arr[largest])
	largest = l;
	if(r<n && arr[r]>arr[largest])
	largest = r;
	
	if(i!=largest){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
	
}

void heapsort(int arr[],int size){
	for(int i = size/2 - 1; i>=0;i--){
		heapify(arr,size,i);
	}
	
	//take from root
	
	for(int i=size-1;i>=0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,i,0);
	}
	
	for(int i=0;i<size;i++)
	cout<<arr[i]<<"\n";
	
}

int main()
{
	int arr[6] = { 4 , 6, 8, 10, 2,11};
	int size = sizeof(arr)/sizeof(arr[0]);
	//cout<<size;
	heapsort(arr,size);

	return 0;
	
}
