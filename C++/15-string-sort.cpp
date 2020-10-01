#include <bits/stdc++.h> 
using namespace std;

bool compare(string a, string b){
	if(a.find(b)!=string::npos or b.find(a)!=string::npos){
		return a.length() > b.length();
	}
	return a<b;
}

int main(){
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr, arr+n, compare);

	// print
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

/*
Input:
3
bat
apple
batman

Output:
apple
batman
bat
*/