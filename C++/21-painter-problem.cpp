#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define value 10000003

bool isValidConfig(ll boards[], ll n, ll k, ll ans){
    int painter = 1;
    ll current_boards = 0;
    for (int i = 0; i < n; i++){
        if (current_boards + boards[i] > ans){
            current_boards = boards[i];
            painter++;
            if (painter > k)
                return false;
        }
        else
            current_boards += boards[i];
    }
    return true;
}

ll binary_search_board(ll boards[], ll n, ll k){
	// all boards, n number of board, k painter, t time
    ll total_boards = 0;
    ll s = 0, e = 0;
    for (int i = 0; i < n; i++){
        total_boards += boards[i];
        s = max(s, boards[i]);
    }
    e = total_boards;
    // start from maximum board length, end is sum of all board length
    int ans = s;

    while (s <= e){
        ll mid = (s + e) / 2;
        if (isValidConfig(boards, n, k, mid)){//true
            ans = mid;
            e = mid - 1;
        }else // false
        	s = mid + 1;
    }

    return ans;
}

int main()
{

    ll n, k, t;
    cin>>n>>k>>t;
    ll boards[100005];
    for (int i=0; i<n; i++)
        cin >> boards[i];
    ll ans=(binary_search_board(boards, n, k)*t)%value;
    cout<<ans<<endl;
}