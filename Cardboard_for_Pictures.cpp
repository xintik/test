#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
     
{

	ll n , c;
	cin >> n >> c;
	
	vector < ll > vec(n);
	for(int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	ll left = 0, right = 1e9;
	while(right > left )
	{
		ll mid = (left + right + 1 ) / 2;
		ll S = 0;
		for( int i = 0 ; i < n; i++)
		{
			S = S + (vec[i] + 2 * mid)*(vec[i] + 2 * mid); 
			if ( S > c) break;
		}
		if(S <= c)
		{
			left = mid;
		}
		else 
		{
			right = mid - 1;
		}
	}
	cout << left << endl;
	
	

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