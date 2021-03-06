#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX / 2;

class acmp368 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;

        cin >> n;
        vector<vector<int>> minSum(size_t(n + 1), vector<int>(n + 1, INF));
        vector<vector<int>> a(size_t(n + 1), vector<int>(n + 1, 0));
        vector<vector<char>> ans(size_t(n + 1), vector<char>(size_t(n + 1), '.'));
        vector<vector<pair<int, int>>> from(size_t(n + 1), vector<pair<int, int> >(size_t(n + 1), {0, 0}));

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                char x;
                cin >> x;
                a[i][j] = x - '0';
            }
        }

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (i == 1 && j == 1) {
                    minSum[i][j] = a[i][j];
                    from[i][j] = {-1, -1};
                } else if (minSum[i - 1][j] <= minSum[i][j - 1]) {
                    minSum[i][j] = minSum[i - 1][j] + a[i][j];
                    from[i][j] = {i - 1, j};
                } else {
                    minSum[i][j] = minSum[i][j - 1] + a[i][j];
                    from[i][j] = {i, j - 1};
                }
            }
        }

        int x = n;
        int y = n;

        while (from[x][y] != make_pair(-1, -1)) {
            ans[x][y] = '#';
            pair<int, int> temp = from[x][y];
            x = temp.first;
            y = temp.second;
        }

        ans[1][1] = '#';

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
};