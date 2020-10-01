#include <iostream>
using namespace std;

int binary_search_lower_bound(int arr[], int n, int key){
	int left, right, mid ,result;
	left = 0;
	right = n-1;
	result = -1;
	while(left<=right){
		mid = (right + left)/2; // n/2
		if(arr[mid] == key){
			result = mid;
			right = mid -1; //search in left part
		}
		else if(arr[mid]>key)
			right = mid-1;
		else
			left = mid + 1;
	}
	return result;
}

int binary_search_upper_bound(int arr[], int n, int key){
	int left, right, mid ,result;
	left = 0;
	right = n-1;
	result = -1;
	while(left<=right){
		mid = (right + left)/2; // n/2
		if(arr[mid] == key){
			result = mid;
			left = mid + 1; // search in right side
		}
		else if(arr[mid]>key)
			right = mid-1;
		else
			left = mid + 1;
	}
	return result;
}


int main(){
	
	int a[] = {1,2,2,2,2,2,5,88,500,504,800,870,899,900,1000,1001,1055};

	int n = sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	cout<<binary_search_lower_bound(a,n,key)<<endl;
	cout<<binary_search_upper_bound(a,n,key)<<endl;
	
	return 0;
}

/*
Problem: Binary search.
1. First occurance of a number(lower bound).
2. Last occurance of a number(upper bound).

Note: array is sorted;

Recursive approah may take o(long(n)) space while
iterative approach take o(1) space.

Note: lower_bound, upper_boud are defined in algorithm.
*/