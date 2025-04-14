#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n;
    cin >> n;
    
   
    vector<pair<ll, ll>> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i].first;    
        numbers[i].second = i;    
    }  

   
    sort(numbers.begin(), numbers.end());
   
    vector<ll> sums(n, 0);
    sums[0] = numbers[0].first;
    for(int i = 1; i < n; i++) {
        sums[i] = sums[i-1] + numbers[i].first;
    } 

    
    vector<ll> answers(n, -1);
    
  
    vector<int> waiting;
    
    
    for(int i = 0; i < n; i++) {
       
        waiting.push_back(numbers[i].second);
        
     
        if(i == n-1 || numbers[i+1].first > sums[i]) {  // i is last and value of number is less then prifix sum then i is the ans

           
            for(int pos : waiting) {   // waiting hold the possition pos is positin
    
                answers[pos] = i; // i is the len 
            }
           
            waiting.clear();
        }
    }

    
    for(int i = 0; i < n; i++) {
        cout << answers[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;   
    cin >> t;
    while(t--) solve();    
    return 0;
}