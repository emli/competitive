#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
const int mod = (int) 1e9 + 7;


class CAyubIUteryanniiMassiv {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> c(122);

        vector<vector<int>> dp(n + 1,vector<int>(3));

        dp[0][0] = 1;

        while(l % 3 != r % 3) {
            c[l % 3]++;
            l++;
        }
        c[l%3]++;
        l++;
        for(int i = 0; i < 3; i++) c[i] += (r + 1 - l)/3;

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    dp[i][(j + k) % 3] = (dp[i][(j + k) % 3] +  (dp[i - 1][j] *  1LL * c[k]) )% mod;
                }
            }
        }

        cout << dp[n][0] << endl;
	}
};
