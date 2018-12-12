#include <bits/stdc++.h>

using namespace std;


class acmp114 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n, k;
        cin >> n >> k;
        vector<vector<int>> countNumbers(size_t(n + 1), vector<int>(k + 1, 0));

        for (int i = 1; i < k; ++i) {
            countNumbers[1][i] = 1;
        }

        for (int i = 2; i <= n; ++i) {
            for (int last = 0; last < k; ++last) {
                for (int prev = (last == 0); prev < k; ++prev) {
                    countNumbers[i][last] += countNumbers[i - 1][prev];
                }
            }
        }

        int res = 0;

        for (int i = 0; i < k; ++i) {
            res += countNumbers[n][i];
        }
        cout << res << endl;
    }
};
