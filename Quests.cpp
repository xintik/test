#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n , k;
	cin >> n >> k;
	vector < int > a , b;
	for(int i = 0 ; i < n; i++)
	{
		int x;
		 cin >> x;
		 a.push_back(x);
	}
	for(int i = 0 ; i < n; i++)
	{
		int x;
		 cin >> x;
		 b.push_back(x);
	}
	long long sum = 0;
	
	long long res = 0;
	int mx = INT_MIN;

	for ( int i = 0 ; i < min( k , n ) ; i++)
	{

		sum = sum + a[i];
		mx = max( mx , b[i]);
		res = max( res , sum + mx *( k - i - 1 ) );
	}
	cout << res << endl;
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