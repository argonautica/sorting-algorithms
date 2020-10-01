#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long int

bool is_valid_config(ll arr[], ll n, ll c, ll m){//O(n)
	// m is the atleast min distance between two cows
	ll cows_count = 1;
	ll temp = arr[0];
	for(ll i=1; i<n; i++){
		if(arr[i] - temp >= m){
			cows_count++;
			temp = arr[i];
		}
		if(cows_count == c) return true;
	}

	return false;
}

void binary_search_cows(ll arr[], ll n, ll c){
	ll s=arr[0], e=arr[n-1];
	ll ans=-1, mid;

	while(s<=e){
		mid = (s+e)/2;
		if(is_valid_config(arr,n,c,mid)){
			ans = mid;
			s = mid+1;
		}else{
			e = mid-1;
		}
	}

	cout<<ans<<endl;
}

int main(){
	ll n,c;
	cin>>n>>c;
	ll arr[n];
	for(ll i=0;i<n; i++)
		cin>>arr[i];
	sort(arr, arr+n); // O(n)
	binary_search_cows(arr,n,c);
	return 0;
}

/*
Sorting O(nlog(n))
Binary search O(logn)
Valid Config  O(n)
Complexity = O(nlogn) + O(nlogn) = O(nlogn)

5 3
1	2	4	8	9 => dist => min
--------------------------------
Y	Y	Y	N 	N => 1,2  => 1
N	Y	Y	Y 	N => 2,4  => 2
N	N	Y	Y 	Y => 4,1  => 1
Y	N	Y	N 	Y => 3,5  => 3
Y	Y	N	Y 	N => 1,6  => 1
N	Y	Y	Y 	N => 2,4  => 2
N	Y	Y	N 	Y => 2,5  => 2
Y	Y	N	N 	Y => 1,7  => 1
Y	N	Y	Y 	N => 3,4  => 3
N	Y	N	Y 	Y => 6,1  => 1
------------------------------
max(all) = 3

Note: 5C2 = 10 ways
*/