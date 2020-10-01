#include <iostream>
using namespace std;

int binary_search_pivot(int a[], int n){
	int s=0, e=n-1, mid;
	while(s<=e){
		mid = (s+e)/2;
		if(mid<e and a[mid]>a[mid+1]){
			cout<<mid<<endl;
			break;
		}
		if(mid>s and a[mid] < a[mid-1]){
			cout<<mid-1<<endl;
			break;
		}
		if(a[s]>=a[mid]) // pivot lies in left side
			e = mid-1;
		else
			s = mid+1; // pivot lies in right side
	}
	if(s>e)
		cout<<"Does,t exists!\n";
}


int main(){
	
	int a[] = {99,1,2,3,4,90};
	int n = sizeof(a)/sizeof(int);
	binary_search_pivot(a,n);
	
	return 0;
}

/*
Problem: Binary search, find maximum element in the array.

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
a[left side ] >= a[right side]

*/