#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		str += str;
		//cout << str << endl;

		int mx = 0 , k = 0;
		for(int i = 0 ; i<str.size() ; i++)
		{
			if(str[i] == '1') k++;
			else 
			{
				mx = max(mx , k);
				k = 0;
			}
		}
		mx = max(mx , k);

		if( mx > (str.size())/2 ) cout << (long long) (str.size() /2) * (str.size()/2) << endl;
          else
          {
          	long long left = (mx+1) / 2;
          	long long right = (mx+2) / 2;
          	cout << left * right << endl;
          }
	}
}