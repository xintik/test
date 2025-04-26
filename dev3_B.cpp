#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n , x;
    cin >> n >> x;
    if(n == x)
    {
        for(int i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    else
    {
       
        for(int i = 0; i<n; i++)
        {
            if(x == i) continue;
            cout << i << " ";
        }
        cout << x  << "\n";
    }
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