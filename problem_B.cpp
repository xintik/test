#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    
    vector<ll> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    if(sum * k < x) {
        cout << "0\n";
        return;
    }
    
    vector<ll> prefix(n + 1, 0);
    for(int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }
    
    
    ll pos= 0;
    
   
    for(ll i = 0; i < n; i++) {
        ll curr_sum = prefix[n] - prefix[i];
        if(curr_sum >= x) {
            pos += k;
        } else {
            
            ll rem = x - curr_sum;
            ll needed = (rem + sum - 1) / sum;  
            if(needed < k) {
                pos += (k - needed);
            }
        }
    }
    
    cout << pos << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}