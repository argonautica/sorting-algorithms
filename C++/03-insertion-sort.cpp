#include <iostream>
using namespace std;
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
void insertion_sort_iterative(int arr[], int n){
	for(int i =1; i<n;i++){
		int no = arr[i], j;
		for(j=i-1; j>=0 && arr[j]>no; j--)
			arr[j+1] = arr[j];
		swap(&arr[j+1] ,&no); // as decreased 1 time extra
	}
}
void insertion_sort_recursive(int arr[], int n){
	if(n<=1) return;
	insertion_sort_recursive(arr,n-1);
	int no = arr[n-1];
	int j=n-2;

	while(j>=0 and arr[j]>no){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = no;

}

int main(){
	int n;
	cin>>n;
	int arr[n];// = {2,99,13,5,8,61}; // n=6
	// scan elements
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//insertion sort
	//insertion_sort_iterative(arr,n);
	insertion_sort_recursive(arr,n);

	// printing sorted array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<", ";
	}

	return 0;
}


/*
Problem: Insertion sort
As the name: Insert to its position in sorted  array part from unsorted array part.

*/