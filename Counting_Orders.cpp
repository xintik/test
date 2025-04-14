#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int T = 1e9+7;
	int n; cin >> n;

	vector < int > a , b;
	for(int i = 0; i< n; i++)
	{
		int x;
		 cin >> x;
		 a.push_back(x);
	}
	sort(a.begin() , a.end());

	for(int i = 0; i< n; i++)
	{
		int x;
		 cin >> x;
		 b.push_back(x);
	}
	sort(b.begin() , b.end() , greater<>());
    long long  total = 1;
	for(int i = 0; i< n; i++)
	{
		int starting = a.size() - (upper_bound(a.begin() , a.end() , b[i]) - a.begin()) ;
		total = (total * max(starting - i , 0)) % T;
	}
	cout << total <<"\n";
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