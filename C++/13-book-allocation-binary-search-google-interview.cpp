#include <iostream>
#define ll long long int
using namespace std;

bool isValidConf(ll books[], ll n, ll k,ll ans){// O(n)
	int students = 1;
	ll current_pages =0;
	for(int i=0;i<n;i++){
		if(current_pages + books[i]>ans){
			current_pages = books[i];
			students++;
			if(students>k)
				return false;
		}else{
			current_pages += books[i];
		}
	}
	return true;
}

ll binary_search_book(ll books[], ll n, ll k){ // O(long)
	ll total_pages = 0;
	ll s=0, e=0;
	for(int i=0;i<n;i++){
		total_pages += books[i];
		s = max(s,books[i]); // calculate maximum page book
	}
	// one of the student will read atleast maximum page book
	// so it is better to start from there.
	// it can also be started from 0
	e = total_pages;
	ll finalAns=s; // maximum page book
	while(s<=e){
		ll mid = (s+e)/2;
		if(isValidConf(books,n,k,mid)){
			finalAns = mid;
			e = mid - 1;
		}else{
			s = mid + 1;
		}
	}
	return finalAns;
}

int main(){ // O(nlog(n))
	ll n;
	ll students;
	cin>>n>>students;

	ll books[100005];
	//sorted array
	for(int i=0;i<n;i++){
		cin>>books[i];
	}
	cout<<binary_search_book(books,n, students)<<endl;
	
	return 0;
}

/*
Problem: Maximum number of pages assigned to a student is minimum.

*/