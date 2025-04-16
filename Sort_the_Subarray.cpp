#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec1(n), vec2(n);
    for (int i = 0; i < n; i++)
        cin >> vec1[i];
    for (int i = 0; i < n; i++)
        cin >> vec2[i];

    int left = -1 , right = -1;


    for(int i = 0; i< n;i++)
    {
       if(vec1[i] != vec2[i])
       {
         right = i;

        if(left == -1) left = i;
       
       }
    }

    while( (left > 0) && vec2[left-1] <= vec2[left])
        left--;
    while( (right < n - 1) && vec2[right+1] >= vec2[right])
        right ++;

    cout << left + 1 << " " << right + 1 << endl;
     

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
