#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void selection_sort_recursive(int arr[], int n){
	// find max and place it at the end
	if(n==1) return;
	int max_index = 0;
	for(int j=1;j<n;j++){
		if(arr[j]>arr[max_index])
			max_index = j;
	}
	swap(&arr[max_index], &arr[n-1]);
	return selection_sort_recursive(arr,n-1);
}

void selection_sort_iterative(int arr[], int n){
	int min;
	for(int i=0;i<n-1;i++){
		min = i; // min_index
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min = j;
		}
		swap(&arr[min], &arr[i]);
	}
}

int main(){
	int n, f=1, min;
	cin>>n;
	int arr[n];// = {2,99,3,5,8,61}; // n=6
	// scan elements
	for(int i=0;i<n;i++)
		cin>>arr[i];

	//selection_sort_iterative(arr, n);
	selection_sort_recursive(arr, n);
	// printing sorted array
	for(int i=0;i<n;i++)
		cout<<arr[i]<<", ";
	cout<<endl;
	
	return 0;
}


/*
Problem: Selection sort
As the name: select min element and bring to front.

Assume i is min
Find min index in rest of the array from i+1 onward.
Swap element i with min_index i.e place min from initial position.

*/