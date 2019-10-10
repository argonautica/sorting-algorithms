#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
  int minIndex, temp;
  for(int i = 0 ; i<n-1; i++){
    minIndex = i;
    for(int j = i+1; j<n; j++){
      if(arr[j]< arr[minIndex]){
          minIndex = j;
      }
          //cout<<minIndex<<endl;
    }
    temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }

}




int main()
{
  int n;
  cin>>n;
  int arr[n];

  for(int i =0; i<n;i++){
    cin>>arr[i];
  }

  BubbleSort(arr,(sizeof(arr)/sizeof(arr[0])));

  for( int i = 0 ;i<n; i++){
    cout<<arr[i]<<" ";
  }

}
