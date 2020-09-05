#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
int mod = (int)1e9 + 7;
class COgrablenieBanka {
public:
    int run(int pos,vector<int> &a,int last,vector<vector<int>> &dp) {
        int &memo = dp[pos][last];

        if (memo != -1){
            return memo;
        }
        if (pos == a.size()){
            return memo = 1;
        }
        int ans = 0;
        if (pos == 0){
            ans += run(pos + 1,a,a[0],dp) % mod;
        }else {
            for (int i = 0; i < 26; ++i) {
                if (a[pos] == abs(i - last)){
                    ans += run(pos + 1,a,i,dp) % mod;
                }
            }
        }
        return memo = ans % mod;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }


        vector<vector<int>> dp(n + 1,vector<int>(26,-1));
        cout << run(0,a,0,dp);

	}
};
