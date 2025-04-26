#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
	string str;
    cin >> str;
    int s = 0 , cnt = 0;
    for(int i = 0; i < str.size() ; i++)
    {
        if(str[i] == '1') s++;
    }

    for(int i = 0; i < str.size() ; i++)
    {
        if(str[i] == '1') cnt += s - 1;
        else cnt += s + 1;
    }

    cout << cnt << "\n";
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