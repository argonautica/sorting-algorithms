// By Arshdeep (github.com/ar33h)
#include<iostream>
using namespace std;

int arr[10];
int n, i;

void bubble_sort(int arr[], int n);
void display(int arr[], int n);
void passes(int arr[], int n);

int main()
{
    cout<<"\n------BUBBLE SORT------";
    cout<<"\n\nEnter no. of Array elements: ";
    cin>>n;
    cout<<"\nEnter Array elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nUnsorted Array: [";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<"]\n";
    bubble_sort(arr,n);
    display(arr, n);
}

void bubble_sort(int arr[], int n)
{
    int j, k;
    int temp;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-(i+1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                passes(arr, n);
            }
            
        }
    }
    
}

void display(int arr[], int n)
{
    cout<<"\n\nSorted Array: [";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<"]";    
}

void passes(int arr[], int n)
{
    int x;
    cout<<"\nPass "<<i+1<<": [";
    for(x=0; x<n; x++)
    {
        cout<<arr[x]<<" ";
    }
    cout<<"]";
}