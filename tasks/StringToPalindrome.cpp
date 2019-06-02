#include <iostream>
#include <vector>
using namespace std;

class StringToPalindrome {
public:
    int minOf(int x,int y,int z){
        return min(x,min(y,z));
    }
    vector<vector<int> > dp;
    int calc(string& s,int l,int r){
        int& ans = dp[l][r];
        if (ans != -1){
            return ans;
        }
        if (r - l < 1){
            return ans = 0;
        }else if (s[l] == s[r]){
            return ans = calc(s,l + 1, r - 1);
        }else {
            return ans = 1 + minOf(calc(s,l + 1,r),calc(s,l,r - 1), calc(s,l + 1,r - 1));
        }
    }
    void run(istream& cin, ostream& cout,int cases){
        string s;
        cin >> s;
        dp = vector<vector<int>> (s.size() + 1,vector<int>(s.size() + 1,-1));
        cout <<"Case " << cases <<": "<< calc(s,0,s.length() - 1) << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        int cases = 1;
        cin >> t;
        while (t--) run(cin,cout,cases++);
	}
};
