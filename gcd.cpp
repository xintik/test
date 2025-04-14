#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        ll mx = LLONG_MIN;
        ll mn = LLONG_MAX;

        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }

        ll ans = LLONG_MIN;
        for(ll i = 0; i <= 100; i++) {
            ans = max(ans, gcd(mn + i, mx + i));
        }

        cout << ans << endl;
    }
    return 0;
}
