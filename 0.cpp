#include<bits/stdc++.h>
using namespace std;

void count(string s){

	int cnt = 1;

	if(s[0] == '1')
	{
		cnt = 2;
	}

	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] == s[i-1]) cnt++;
		else cnt += 2;
	}

	cout << cnt << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
           
           int hold = -1 , right = -1;

           for(int i = 0 ; i < n; i++)
           {
           	if(s[i] == '1' && hold == -1) hold = i; 
           	else if(s[i] == '0' && hold != -1)
           	{
           		while(i < n && s[i] == '0')
           		{
           			i++;
           		}
           		right = i;
           	}

           	if(right != -1) break;
           }


		if(right == -1 )  count(s);
		else
		{
			reverse(s.begin() + hold  , s.begin() + right);
			 count(s);
		}

         
	}
}