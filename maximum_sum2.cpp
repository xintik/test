#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
    ll n , k;
    cin >> n >> k;

    vector < ll > vec , vec1(n+1);

    ll sum = 0;
    for ( int i = 0; i< n; i++)
    {
        ll x;
        cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin() , vec.end());

    for(int i = 0; i< n ;i++)
    {
        sum += vec[i];
        vec1[i+1] = sum;
        
    }
    ll ans = 0;
    for(int i = 0; i<= k; i++)
    {
       ans = max(ans , vec1[ n- (k-i)] - vec1[ 2*i ]);
    }
    cout << ans <<"\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0; 
}