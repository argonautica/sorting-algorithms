//Quick Sort
//Author: Ravi Prakash (https://github.com/ravi-prakash1907)

#include<iostream.h>
#include<conio.h>

template <class T>
void swap(T *one, T *two) 
{ 
    T temp = *one; 
    *one = *two; 
    *two = temp; 
}

//--------------------------------------//

	int partition (int arr[], int low, int high) 
	{ 
	    int pivot = arr[high];   
	    int i = (low - 1);
	  
	    for (int j = low; j <= high- 1; j++) 
	    { 
	        if (arr[j] <= pivot) 
	        { 
	            i++;  
	            swap(&arr[i], &arr[j]); 
	        } 
	    } 
	    swap(&arr[i + 1], &arr[high]); 
	    return (i + 1); 
	} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
  
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

//--------------------------------------//

template <class T>
void getArr(T arr[], int n)
{
	cout<<"Enter the array: ";
	for(int i=0; i<n; i++)
		cin>>arr[i];
}

template <class T>
void putArr(T arr[], int n)
{
	cout<<"Sorted array: \n\n";
	for(int i=0; i<n; i++)
		cout<<arr[i];
}
/////////////////////////////////////////

template<class T>
void main()
{
 clrscr();
   T<int> arr[6], x;
   int size;

   cout<<"Enter size of the array: ";
   cin>>size;

  	getArr(arr, size);

  quickSort(arr, 0, size-1);

  putArr(arr, size);

 getch();
}