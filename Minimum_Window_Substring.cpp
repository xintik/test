#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s , t;
	cin >> s >> t;
	unordered_map < char , int > mpt , mps;

	for(auto &it : t)
	{
		mpt[it]++;
	}

	int have = 0, need = mpt.size();
   
    pair < int , int > pr={-1,-1};

	int l = 0;
	int len = INT_MAX;
	for(int r = 0; r < s.size() ; r++)
	{
       
       char ch = s[r];
       mps[ch]++;

       if(mpt.count(ch) && mpt[ch] == mps[ch] )
       {
       	have++;
       }

       while(have == need)
       {
       	if(len > r-l+1)
       	{
       		len = r - l + 1;
       		pr = {l , r};

       	}

       	mps[s[l]]--;

       	if(mpt.count(s[l]) && mpt[s[l]] > mps[s[l]])
       	{
       		have--;
       	}
       	l++;
       }


	}

	if(len == INT_MAX) cout << "" << endl;
	else cout << s.substr(pr.first , len) << endl;
	return 0;
}