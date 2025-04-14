#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	int n;
	cin >> n;
	vector < int > vec;
	for( int i = 0; i< n; i++)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	ll mx = vec[0];
	ll sum = vec[0];
     
     for(int i = 1; i < n; i++)
     {
     	if( abs(vec[i] )% 2 == abs( vec[i-1])%2 )
     	{
     		sum = vec[i];
     	}
     	else
     	{
     		sum = sum + vec[i];
     	}

     	if(vec[i] > sum ) sum = vec[i];

     	mx = max(mx , sum);
     }
     cout << mx << endl;
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