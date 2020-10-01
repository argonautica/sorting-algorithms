#include <iostream>
#define ll long long int
using namespace std;

int binary_search_scholarship(ll n, ll m, ll x, ll y){
	ll left, right, mid, studnet_get=-1;
	left = 0;
	right = n;
	while(left<=right){
		mid = (right + left)/2; // n/2
		if(mid*x <= m+(n-mid)*y){
			studnet_get = mid;
			left = mid+1;
		}
		else
			right = mid-1;
	}
	return studnet_get;
}


int main(){
	ll n,m,x,y;
	cin>>n>>m>>x>>y;
	cout<<binary_search_scholarship(n,m,x,y)<<endl;
	
	return 0;
}

/*
Problem: Maximum number of student who can get 100% scholarship.

N student, M coupons, X coupon required to get 100% scholarship, Y coupon to pay back if fail to get 100% scholarship.
Input is of oder 10^9.
*/