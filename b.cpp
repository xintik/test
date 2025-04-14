#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n , q;
    cin >> n >> q;
    vector<int> vec , vec1;
    set < int > st;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

     for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    for(int i = 0; i< q; i++)
    {

      if(st.count(vec1[i])) continue;
      st.insert(vec1[i]);
        for(int j = 0 ; j< n; j++)
        {
            if(vec[j] % (1 << vec1[i]) == 0)
            {
                vec[j] += (1 << (vec1[i]-1) );
            }
        }
    }

    for(auto &it : vec)
    {
        cout << it << " ";
    }
    cout << endl;

}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}