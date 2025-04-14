#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int k;
	cin >> k;
	int left = 0 ; 
	int result = 0;
	unordered_map < char , int > mp;
	int mostf = 0;
	for(int right = 0; right < str.size() ; right++)
	{
		mp[str[right]]++;
		for(auto &it : mp)
		{
			mostf = max(mostf , it.second);
		}
		if((right - left + 1) - mostf <= k)
		{
			result = max(result , right - left + 1);
		}
		else
		{
			mp[str[left]]--;
			left++;
		}

	}
	cout << result << endl;
}