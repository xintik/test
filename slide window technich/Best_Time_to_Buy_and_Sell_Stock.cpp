#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	int mx = 0;
	int l = 0 , r = n - 1;
	vector < int > vec;
	for(int i = 0 ; i < n; i++)
	{
		int x;
		cin >> x; 
		vec.push_back(x);
	}
	while(r > l)
	{
     if(vec[l] > vec[r]) l++;
     else 
     {
     	mx = max( mx , vec[r] - vec[l]);
     	r -- ;
     }

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