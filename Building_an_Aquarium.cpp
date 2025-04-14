#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	ll n , x;
	cin >> n >> x;
	vector < ll > vec(n);
	for(int i = 0 ; i< n; i++)
	{
		cin >> vec[i];
	}

	ll left = 0, right = INT_MAX;
	while( right > left)
	{
		ll mid = (left + right  + 1) / 2;
		ll sum = 0;
		for(int i = 0; i< n; i++)
		{
			sum += max(mid - vec[i] , 0ll);
		}

		if(x >= sum)
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