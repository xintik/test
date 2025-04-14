#include<bits/stdc++.h>
using namespace std;

void solve() {
    string str;
    cin >> str;

    int l = 0 ;  
    int mx = 0;
    unordered_set<char> st;

    for(int r = 0; r < str.size() ; r++) 
    {
            while(st.find(str[r]) != st.end())
            {
                st.erase(str[l]);
                l++;
            }
            st.insert(str[r]);
            mx = max(mx , r - l + 1);
    }
   

    cout << mx << endl;
}

int main() {
    solve();
}
