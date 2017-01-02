#include<iostream>
using namespace std;

int chk(int a[],int q,int r){
	
	int mid = (q+r)/2;
	if(q==r)
return q;
if(a[q]>a[mid])
	chk(a,q,mid);
else if(a[r]<a[mid])
chk(a,mid+1,r);


	
	
}

int main()
{
	
	int a[] = {57,58, 27, 29, 35, 42, 56};
	int ans = chk(a,0,5);
	printf("%d",a[ans]);
	
	
}
