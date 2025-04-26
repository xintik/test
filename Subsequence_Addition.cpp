#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve()
{
	int n;
	cin >> n;
	vector < long long > vec(n) , vec1(n);
	long long sum = 0;
	for(int i = 0; i< n; i++)
	{
		cin >> vec[i];
	}
	
	sort(vec.begin() , vec.end());

	if(vec[0] != 1) 
	{
		cout << "NO\n" ;
		return; 
	}
  sum = vec[0];
  for(int i = 1; i< n; i++)
  {
  	if(vec[i] > sum) 
  	{
  		cout << "NO\n";
  		return;
  	}
  	sum += vec[i];
  }

  cout << "YES\n" ;
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