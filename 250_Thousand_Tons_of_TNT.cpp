#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    vector<ll> pfix(n + 1, 0);  

    for (int i = 1; i <= n; i++) {  
        ll x;
        cin >> x;
        sum += x;
        pfix[i] = sum;  
    }

    ll ans = -1;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            ll mx = LLONG_MIN;
            ll mn = LLONG_MAX;
            
            for (int j = i; j <= n; j += i) {
                ll p = pfix[j] - pfix[j - i]; 
                mx = max(mx, p);
                mn = min(mn, p);
            }

            ans = max(ans, mx - mn);
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
