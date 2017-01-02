#include<iostream>
#include<climits>
using namespace std;
void swap(int *x,int *y);
class minheap{
	int heap_size;
	int capacity;
	int *harr;
	
	public:
		minheap(int size);
		void printarray();
		int left(int i){return (2*i+1);}
		int right(int i){return (2*i+2);}
		int parent(int i){return (i-1)/2;}
		//void swap(int *a,int *b);
		void decrease_key(int i,int new_val);
		
		void delete_key(int i);
		void insert(int val);
		int extractmin();
		void heapify(int i);
		int getmin(){
			return harr[0];
		}
		

};

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b  = temp;
}
minheap::minheap(int size){
	harr = new int[size];
	capacity = size;
	heap_size = 0;
}

void minheap::insert(int val){
	if(heap_size == capacity){
		cout<<"OVerflow";
		return;
	}
	heap_size++;
	int i = heap_size -1;
	harr[i] = val;
	
	while(i!=0 && harr[parent(i)] > harr[i]){
		swap(&harr[parent(i)], &harr[i]);
		i = parent(i);
		
	}
	
}
//basically put the value that is passed to the given ith place
void minheap::decrease_key(int i,int new_val){
	harr[i] = new_val;
	while(i!=0 && harr[parent(i)] > harr[i]){
		swap(&harr[parent(i)],&harr[i]);
		i = parent(i);
		
	}
}

//cutting the head, so call heapify
int minheap::extractmin(){
	if(heap_size <= 0)
	return INT_MAX;
	if(heap_size == 1)
	{
		heap_size--;
		int val = harr[heap_size];
		return val;
		}
		
	int val = harr[0];
	harr[0] = harr[heap_size-1];
	heap_size--;
	heapify(0);
	return val;

}

void minheap::heapify(int i){
	int smallest = i;
	int l = left(i);
	int r = right(i);
	if(l<heap_size && harr[l]<harr[i])
	smallest = l;
	if(r<heap_size && harr[r]<harr[smallest])
	smallest = r;
	
	if(smallest!=i)
	{
		swap(&harr[i],&harr[smallest]);
		heapify(smallest);
	}
	
}

void minheap::delete_key(int i){
	decrease_key(i,INT_MIN);
	extractmin();
}

void minheap::printarray()
{
	for(int i=0;i<heap_size;i++)
	cout<<harr[i]<<"\n";
	
}


int main()
{
	minheap m(10);
	m.insert(20);
	m.insert(5);
	m.insert(11);
	m.insert(15);
	m.insert(16);
	m.insert(9);
	m.insert(7);
	m.insert(8);
	m.insert(0);
	

	
	cout<<m.getmin();
	m.extractmin();
	cout<<m.getmin();
	m.printarray();
	return 0;
	
}
