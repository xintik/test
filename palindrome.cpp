#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector < int > vec;
	for(int i = 0; i<n; i++)
	{
		int p;
		cin >> p;
		vec.push_back(p);
	}

   for(int i =0; i<vec.size() ; i++)
   {
   	if(vec[i] != vec[n - i - 1]) 
   	{
   		cout <<"NO\n" ;
   		return; 
   	}
   }
   cout << "YES\n";
}
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
    	solve();
    }
	
}
