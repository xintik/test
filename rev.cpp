#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n , k;
	cin >> n >> k;
	string str;
	cin >> str;
	char ch = str[0];
	 
	string rev = "";
	int index = 0;
	char car = str[0];
	for(int i = 0 ; i< str.size() ; i++)
	{
      if(str[i] > ch)
      {
      	car = str[i];
      	index = i;
      }
	}
	if(k > 0 && index != 0)
	{
        cout <<"YES\n";
        return;
	}
	for(int i = str.size()-1; i>=0 ; i--)
	{
		rev+=str[i];
	}
	if( rev > str) cout <<"YES\n";
	else cout << "NO\n";
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