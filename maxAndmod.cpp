// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin >> n;
// 	while(n--)
// 	{
//      int x;
//      cin >> x;
//      if(x%2==0) cout <<"-1"<<endl;
//      else{
//      	cout << x << " ";
//      	for(int i = 1; i< x; i++)
//      	{
//      		cout << i <<" ";
//      	}
//      	cout <<"\n";
//      }
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// Function to compute GCD of two numbers
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Compute GCD of entire array
        ll g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }

        // Compute minimum
        ll m = *min_element(a.begin(), a.end());

        // Trivial case: if GCD of array equals minimum
        if (g == m) {
            cout << "Yes\n";
            continue;
        }

        // Use a map to store frequency of elements
        map<ll, int> freq;
        for (ll x : a) {
            freq[x]++;
        }

        // Try each unique value as k
        bool possible = false;
        for (auto [k, cnt] : freq) {
            if (k < g) continue; // GCD of suffix can't be less than g

            // Check if prefix with min k is possible (exists x >= k)
            bool prefix_possible = false;
            ll suffix_count = 0; // Count of elements that are multiples of k
            for (auto [x, f] : freq) {
                if (x >= k) {
                    prefix_possible = true;
                }
                if (x % k == 0) {
                    suffix_count += f;
                }
            }

            // Need at least 1 in prefix and 1 in suffix (i < n)
            if (prefix_possible && suffix_count >= 1 && suffix_count < n) {
                // Compute GCD of all elements that are multiples of k
                ll suffix_gcd = 0;
                for (auto [x, f] : freq) {
                    if (x % k == 0 && f > 0) {
                        if (suffix_gcd == 0) {
                            suffix_gcd = x;
                        } else {
                            suffix_gcd = gcd(suffix_gcd, x);
                        }
                    }
                }
                if (suffix_gcd == k) {
                    possible = true;
                    break;
                }
            }
        }

        cout << (possible ? "Yes" : "No") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}