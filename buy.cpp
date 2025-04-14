#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int mx = 0;
    int l = 0 , r = n - 1;
    vector < int > vec;
    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x; 
        vec.push_back(x);
    }
   int profit = 0 ;
   int min_buy = vec[0];
   for(auto &it : vec){
    profit = max(profit , it - min_buy);
    min_buy = min(it , min_buy);
   }
   cout<< profit << endl;
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