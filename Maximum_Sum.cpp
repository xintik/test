#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n, k;
    cin >> n >> k;
    ll sum = 0;  
    vector<ll> vec(n);
    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        vec[i] = x;
        sum += x;
    } 

    sort(vec.begin(), vec.end());
    int left = 0, right = n-1;
    while(k-- && left <= right) {  // Added boundary check
        if(left + 1 <= right && (vec[left] + vec[left+1]) > vec[right]) {
            // Only try to remove two elements if we have at least 2 elements left
            sum -= (vec[left] + vec[left+1]);
            left += 2;
        }
        else if(right >= left) {  // Check if right pointer is still valid
            sum -= vec[right];
            right--;
        }
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0; 
}