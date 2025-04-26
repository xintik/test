#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    
    ll fixed_x = -1; 
    bool has_fixed_x = false;
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            ll curr_x = a[i] + b[i];
            if (!has_fixed_x) {
                fixed_x = curr_x;
                has_fixed_x = true;
            } else if (curr_x != fixed_x) {
                cout << 0 << "\n"; 
                return;
            }
        }
    }

   
    ll min_x = 0; 
    ll max_x = 1e18; 
    for (int i = 0; i < n; i++) {
        if (b[i] == -1) {
            min_x = max(min_x, a[i]); 
            max_x = min(max_x, a[i] + k); 
        }
    }

    
    if (has_fixed_x) {
      
        if (fixed_x >= min_x && fixed_x <= max_x) {
            cout << 1 << "\n"; 
        } else {
            cout << 0 << "\n"; 
        }
    } else {
       
        if (min_x <= max_x) {
            cout << max_x - min_x + 1 << "\n";
        } else {
            cout << 0 << "\n"; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}