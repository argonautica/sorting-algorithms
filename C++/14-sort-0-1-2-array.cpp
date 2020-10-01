#include <bits/stdc++.h> 
using namespace std;

void sort_0_1_2(int arr[], int n){
	// three pointers
	int low, mid, high;
	low = mid = 0;
	high = n-1;

	while(mid<=high){
		if(arr[mid] == 1){
			mid++;
		}else if(arr[mid]==2){
			swap(arr[mid], arr[high]);
			high--;
		}else{ // for 0
			swap(arr[low], arr[mid]);
			low++;
			mid++;
		}

	}

}
int main(){
	int arr[] = {1,2,1,2,1,0,1,0,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);

	sort_0_1_2(arr,n);

	// print
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}

/*
sorting 
arr = 1,2,1,1,0,1,0,2,1
low = 0
mid = 0
high = 9
--------------------------
1,2,1,1,0,1,0,2,1
mid = 1
--------------------------
1,1,1,1,0,1,0,2,2
high = 8
--------------------------
1,1,1,1,0,1,0,2,2
mid = 5
--------------------------
0,1,1,1,1,1,0,2,2
mid = 6
low = 1
--------------------------
0,0,1,1,1,1,1,2,2
mid = 7
low = 2
--------------------------
0,0,1,1,1,1,1,2,2
mid = 7
low = 2
high = 7
stop
*/