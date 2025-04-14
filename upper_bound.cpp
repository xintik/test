#include<bits/stdc++.h>
using namespace std;

//🔼 upper_bound: first element >target
//🔽 lower_bound: first element ≥target
int main()
{
	
		int n , terget;
		cin >> n >> terget;
		vector < int > vec(n);
		for(int i = 0; i< n; i++)
		{
           cin >> vec[i];
		}
		sort(vec.begin() , vec.end());
		for(auto &it : vec)
		{
			cout << it <<" ";
		}
		cout <<"\n";

		cout << (upper_bound(vec.begin() , vec.end() , terget) - vec.begin() ) <<"\n";
		cout << (lower_bound(vec.begin() , vec.end() , terget) - vec.begin() ) <<"\n";
	
}
