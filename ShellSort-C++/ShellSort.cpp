//Shell Sort
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

template <class T>
void shellSort(T arr[], int n) 
{  
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < n; i += 1) 
        { 
            int temp = arr[i];
		
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
              
            arr[j] = temp; 
        } 
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

  shellSort(arr, size);

  putArr(arr, size);

 getch();
}