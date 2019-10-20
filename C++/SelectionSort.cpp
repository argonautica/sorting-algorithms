#include<iostream>
using namespace std;
void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int n) {
   for(int i = 0; i<n; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int n) {
   int i, j, imin;
   for(i = 0; i<n-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<n; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
  
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}