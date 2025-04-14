#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   string str;
   cin >> str;
   int c_last = 0, c_non = 0;
   for(int i = str.size() - 1; i>=0 ; i--)
   {
    if(str[i] != '0') break;
    c_last++;
   }
   for(int i = 0; i<str.size() ; i++)
   {
    if(str[i] != '0') c_non++;
   }

   cout << c_last + c_non - 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}