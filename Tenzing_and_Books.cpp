#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n , x;
    cin >> n >> x;
    vector < int > vec(n);
    int s = 0;
    for(int i = 0; i< 3; i++)
    {
      for(int j = 0; j<n; j++)
      {
        int x;
        cin >> x;
        vec[j] = x;
      }

      for(int j = 0; j< n; j++)
      {
        if( (x | vec[j]) != x) break;
        s = s|vec[j];

      }
    }
    if(s == x) cout << "YES\n";
    else cout <<"NO\n";
}

int main() {
   
   int t;
   cin >> t; 
   while(t--)
   {
    solve();
   }
   return 0; 
}