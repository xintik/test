#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	int n;
	cin >> n;
	vector < ll > vec(n);
	for(int i = 0; i<n; i++)
	{
		cin >> vec[i];
	}
	sort(vec.begin() , vec.end());
	ll m = vec[0];
	ll g = 0;
	for( int i = 1; i<n; i++)
	{
		if(vec[i] % m == 0)
		{
			g = __gcd(g , vec[i]);
		}
		if(g == m) 
		{
			cout <<"YES\n";
			return ;
		}
	}
	cout <<"NO\n";


}
int main()
{
	ios_base :: sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}