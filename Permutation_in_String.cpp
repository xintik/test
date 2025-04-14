#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string str1,str2;
	cin >> str1 >> str2;
	unordered_map < char , int > mp;




	for(auto &it : str1)
	{
		mp[it]++;
	}


	int need = mp.size();

	for(int i = 0; i< str2.size() ; i++)
	{
		int cur = 0;
		unordered_map < char , int > mp1;
		
		for(int j = i ; j< str2.size() ; j++)
		{
			char c = str2[j];
			mp1[c]++;
			if(mp1[c] > mp[c])
			{
				break;
			}

			if(mp[c] == mp1[c])
			{
				cur ++ ;
				if(cur == need) 
			{
				cout << "YES" << endl;
				return ;
			}
			}
			
		}

	}
	cout << "NO" << endl;
}
int main()
{
	solve();
	return 0;
}