#include<bits/stdc++.h>
using namespace std;
#define ll long long int


void binary_search_root(ll n, ll k){
	// mid^k = n
	ll s = 0, e = n, mid, ans;
	while(s<=e){
		mid = (s+e)/2;
		if(pow(mid,k)<=n){
			ans = mid;
			s = mid + 1;
		}else
			e = mid - 1;
	}

	cout<<ans<<endl;

}
int main(){
	ll t, a, b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		binary_search_root(a,b);
	} 
	return 0;
}

/*


*/
