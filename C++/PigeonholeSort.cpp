#include<iostream>
#include<vector>
using namespace std;

void pigeonhole_sort(int arr[],int n)
{
	int minm=arr[0],maxm=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<minm)
		minm=arr[i];
		if(arr[i]>maxm)
		maxm=arr[i];
	}
	int range=maxm-minm+1;
	vector<int>holes[range];
	for(int i=0;i<n;i++)
	holes[arr[i]-minm].push_back(arr[i]);
	int index=0;
	for(int i=0;i<range;i++)
	{
		for(auto it:holes[i])
		arr[index++]=it;
	}
}	

int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements of the array : ";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	pigeonhole_sort(arr,n);
	cout<<"Sorted array is : "<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}
