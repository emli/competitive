#include <bits/stdc++.h>

using namespace std;

class Kartochki {
public:
	map<int,int> ch;
	map<int,bool> used;
	long long f(int n)
	{
		long long res=1;
		for(int i=2;i<=n;i++)
			res*=i;
		return res;
	}
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
		cin.tie(0);
		string s;
		long long res = 1;
		cin>>s;
		for(int i=0;i<s.length();i++)ch[s[i]]++;

		for(int i=0;i<s.length();i++){
			res = res * (i + 1);
			if (res % f(ch[s[i]]) == 0 && !used[s[i]]){
				res = res / f (ch[s[i]]);
				used[s[i]] = true;
			}
		}
		cout<<res<<endl;
	}
};