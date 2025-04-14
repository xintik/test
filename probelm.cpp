#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;
    
   
    if (s.size() < p.size() || s.size() > 2 * p.size()) {
        cout << "NO\n";
        return;
    }
    
    
    vector<pair<char, int>> runs_p;
    for (int i = 0; i < p.size(); ) {
        char c = p[i];
        int cnt = 0;
        while (i < p.size() && p[i] == c) {
            cnt++;
            i++;
        }
        runs_p.emplace_back(c, cnt);
    }
    
    
    vector<pair<char, int>> runs_s;
    for (int i = 0; i < s.size(); ) {
        char c = s[i];
        int cnt = 0;
        while (i < s.size() && s[i] == c) {
            cnt++;
            i++;
        }
        runs_s.emplace_back(c, cnt);
    }
    
   
    int j = 0; 
    for (int i = 0; i < runs_p.size(); ++i) {
        char cp = runs_p[i].first;
        int cnt_p = runs_p[i].second;
        int sum_cnt_s = 0;
        
      
        while (j < runs_s.size() && runs_s[j].first == cp) {
            sum_cnt_s += runs_s[j].second;
            j++;
        }
        
       
        if (sum_cnt_s < cnt_p || sum_cnt_s > 2 * cnt_p) {
            cout << "NO\n";
            return;
        }
    }
    
   
    if (j == runs_s.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}