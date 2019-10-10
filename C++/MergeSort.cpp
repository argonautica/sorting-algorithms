//Merge Sort
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

	void merge(int arr[], int l, int m, int r) 
	{ 
	    int i, j, k; 
	    int n1 = m - l + 1; 
	    int n2 =  r - m; 
	  
	    int L[n1], R[n2]; 
	  
	    for (i = 0; i < n1; i++) 
	        L[i] = arr[l + i]; 
	    for (j = 0; j < n2; j++) 
	        R[j] = arr[m + 1+ j]; 
		
	//------
		
	    i = j = 0;
	    k = l; 
	    while (i < n1 && j < n2) 
	    { arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++]; } 
	    while (i < n1) 
	    { arr[k++] = L[i++]; } 
	    while (j < n2) 
	    { arr[k++] = R[j++]; } 
	} 
  
/* SORTING */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
   
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
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

  mergeSort(arr, 0, size-1);

  putArr(arr, size);

 getch();
}