#include<bits/stdc++.h>
using namespace std;
void solve()
{
	 int n;
    cin >> n;
    vector < int > vec(n);
   
    for( int i = 0; i < n; i++)
    {
    	
    	cin >> vec[i];
    	

    }
    for(int i = 0; i < n-1 ; i++)
    {
    	int x = vec[i];
    	int y = vec[i+1];
    	vec[i] = vec[i] - min( x , y);
    	vec[i+1] = vec[i+1] - min( x , y);
    	
    }
   
   

    for( int i = 0; i< n-1; i++)
    {
    	if(vec[i] > vec[i+1])
    	{
    		cout << "NO" << endl;
    		return ;
    	}
    }
    cout << "YES" << endl;

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

