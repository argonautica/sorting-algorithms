#include <iostream>
using namespace std;

int binary_search_rotated(int a[], int s, int e, int key){
	if(s>e) return -1;

	int mid = (s+e)/2;
	
	if(a[mid] == key)
		return mid;
	
	// mid lies in 1st part
	if(a[s]<=a[mid]){
		if(key>=a[s] and key<=a[mid])
			return binary_search_rotated(a,s,mid-1,key);
		return binary_search_rotated(a,mid+1,e,key);

	// mid lies in second part
	}else{
		if(key>=a[mid] and key <= a[e])
			return binary_search_rotated(a, mid+1,e,key);
		return binary_search_rotated(a,s,mid-1,key);

	}
}


int main(){
	
	int a[] = {5,6,7,1,2,3,4};
	int n = sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	cout<<binary_search_rotated(a,0,n-1,key)<<endl;
	
	return 0;
}

/*
Problem: Binary search.

Note: array is sorted and rotated;

Recursive approah may take O(long(n)+precision).



|		.
|	   ..
|	  .	.
|	 .	.
|	.	.
|		.	 .
|		.	.
|		.  .
|		. .
|		.
-----------------

Increasing - sudden decrease - Increasing.
*/