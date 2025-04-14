#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n , m , k;
	cin >> n >> m >> k;
	ll l = 0, r = m;
	while(r > l+1)
	{
		ll mid = (l+r) / 2;
		if( ((mid * (m / (mid+1) ) ) + (m % (mid+1) )) * n >= k  )
		{
			r = mid;
		}
		else 
		{
			l = mid;
		}
	}
	cout << r << "\n";
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}