#include <bits/stdc++.h>

using namespace std;

const int N = (int) 20 + 7;

class acmp120 {
public:
    int a[N][N]{};
    int dp[N][N]{};
    int n, m;

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cin >> n >> m;
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                dp[i][j] = INT_MAX;
            }
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> a[i][j];
            }
        }
        dp[1][1] = a[1][1];

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (i == 1 && j == 1) continue;
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
};
