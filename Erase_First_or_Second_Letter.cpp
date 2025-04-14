#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char>st;//st name string declaer it is take input only discreat number and sort it.
        int ans=0;
        for(auto it:str)
        {
            st.insert(it);
          //  cout << ans << " ";
            ans+=st.size();
 
        }
        cout<<ans<<"\n";
    }
}