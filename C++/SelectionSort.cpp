#include<iostream>
using namespace std;

void swap(int &a, int &b) 
{  int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int *arr, int n) {
   for(int i = 0; i<n; i++)
   {	cout << arr[i] << " ";
   }
   cout << endl;
}

void SelectionSort(int *arr, int n) {
   int i, j, i_min;
   for(i = 0; i<n-1; i++) 
   {  i_min = i; 
      for(j = i+1; j<n; j++)
      {   if(arr[j] < arr[i_min])
             i_min = j;
         swap(arr[i], arr[i_min]);
      }
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int array[n];         
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> array[i];
   }
  
   SelectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}