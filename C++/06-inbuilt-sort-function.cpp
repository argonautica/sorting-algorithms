#include <iostream>
#include <algorithm>
using namespace std;
bool mycompare(int a, int b){
	cout<<"comparing: "<<a<<" "<<b<<endl;
	return a>b;// decreasing
	// a<b; increasing
}
int main(){
	
	int a[] = {2,4,0,96,34,6};
	int n = sizeof(a)/sizeof(a[0]); // a[0] = int
		
	sort(a, a+n, mycompare); // how many element from starting point
	// last element is not inculded i.e 0 to n-1
	// parameter of sort function
	// uses randomize quick sort
	// print array
	for(int i=0;i<n;i++){
		cout<<a[i]<<", ";
	}
	cout<<endl;
	return 0;
}

/*
Problem: Sort function using STL. use in competitive  programming.
- adding comparator
- algorithm header file includes searching, sorting etc.


*/