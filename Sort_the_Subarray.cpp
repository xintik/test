#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	vector < int > vec1 , vec;
	for(int i = 0; i < n; i++)
	{
       int x;
       cin >> x;
       vec1.push_back(x);
	}

	for(int i = 0; i < n; i++)
	{
       int x;
       cin >> x;
       vec.push_back(x);
	}
	pair < int , int > pr = {0 , 0};
     
    for(int  i = 0; i < n-1; i++)
    {
    	if(vec[i] <= vec[i+1])
    	{
    		int j = i+1 ;
    		while(j < n && vec[j] <= vec[j+1])
    		{
    			j++;
    		}
    		if( (j-i) > (pr.second - pr.first) )
    		{
    			pr = {i , j};
    		}

    		i = j - 1;
    	}
    }

    cout << pr.first + 1 << " " << pr.second+1 << "\n";
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
