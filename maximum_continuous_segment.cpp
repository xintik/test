#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec1(n), vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec1[i];
    for (int i = 0; i < n; i++)
        cin >> vec[i];
      int max_len = 1 , start = 0, cur_start = 0;
      for( int i = 1; i < n; i++)
      {
      	if(vec[i] >= vec[i-1])
      	{
      		if( i - cur_start + 1 > max_len)
      	{
      		max_len = i - cur_start + 1;
      		start = cur_start;
      	}

      	}
      	
      	else 
      	{
      		cur_start = i;
      	}
      }

      int end = start + max_len - 1;

      cout << start + 1 << " " << end + 1 << "\n";

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
