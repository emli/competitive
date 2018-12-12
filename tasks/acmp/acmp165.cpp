#include <bits/stdc++.h>

using namespace std;

class acmp165 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int sizeI, sizeJ;

        cin >> sizeI >> sizeJ;
        vector<vector<int>> countWays(size_t(sizeI + 1), vector<int>(sizeJ + 1, 0));
        vector<vector<int>> a(size_t(sizeI + 1), vector<int>(sizeJ + 1, 0));

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = sizeI; i >= 1; --i) {
            for (int j = sizeJ; j >= 1; --j) {
                if (i == sizeI && j == sizeJ) {
                    countWays[i][j] = 1;
                    continue;
                }
                if (i + a[i][j] <= sizeI) {
                    countWays[i][j] += countWays[i + a[i][j]][j];
                }
                if (j + a[i][j] <= sizeJ) {
                    countWays[i][j] += countWays[i][j + a[i][j]];
                }
            }
        }
        cout << countWays[1][1] << endl;
    }
};