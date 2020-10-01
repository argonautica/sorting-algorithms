#include <iostream>
using namespace std;

int binary_search_iterative(int arr[], int n, int key){
	int left, right, mid;
	left = 0;
	right = n-1;
	while(left<=right){
		mid = (right + left)/2; // n/2
		if(arr[mid] == key) return mid;
		else if(arr[mid]>key)
			right = mid-1;
		else
			left = mid + 1;
	}
	return -1;
}

int binary_search_recursive(int arr[], int left, int right, int key){
	if(left>right) return -1;
	int mid = (left+right)/2;
	if(arr[mid]==key) return mid;
	else if(arr[mid]>key) // key in left part
		return binary_search_recursive(arr, left, mid-1, key);
	return binary_search_recursive(arr, mid+1, right, key);
}

int main(){
	
	int a[] = {1,5,88,500,504,800,870,899,900,1000,1001,1055};

	int n = sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	cout<<binary_search_iterative(a,n,key)<<endl;
	cout<<binary_search_recursive(a,0,n-1, key)<<endl;
	
	return 0;
}

/*
Problem: Binary search.
Based upon idea of dividing into 2 parts.Divide and conquer.
Advantage: retuduces time but O(long(n)).

Method:1
	find mid
	if at mid, found
	if more than mid then find in right
	else find in left

Note: array is sorted;

Recursive approah may take o(long(n)) space while
iterative approach take o(1) space.

*/