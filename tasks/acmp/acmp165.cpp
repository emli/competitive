#include <bits/stdc++.h>

using namespace std;

const int N = (int) 70 + 7;

class acmp165 {
public:
    int sizeI, sizeJ;

    int solve(int x, int y, vector<vector<int>> &a) {
        if (x == sizeI && y == sizeJ) {
            return 1;
        }
        int ans = 0;
        if (x + a[x][y] <= sizeI) {
            ans += solve(x + a[x][y], y, a);
        }
        if (y + a[x][y] <= sizeJ) {
            ans += solve(x, y + a[x][y], a);
        }
        return ans;
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        cin >> sizeI >> sizeJ;
        vector<vector<int>> countWays(size_t(sizeI + 1), vector<int>(sizeJ + 1, 0));
        vector<vector<int>> a(size_t(sizeI + 1), vector<int>(sizeJ + 1, 0));
        vector<pair<int, int> > ways[N][N];

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = sizeI; i >= 1; --i) {
            for (int j = sizeJ; j >= 1; --j) {
                if (i == sizeI && j == sizeJ) {
                    countWays[i][j] = 1;
                    break;
                }
                if (i + a[i][j] <= sizeI) {
                    countWays[i][j] += countWays[i + a[i][j]][j];
                }
                if (j + a[i][j] <= sizeJ) {
                    countWays[i][j] += countWays[i][j + a[i][j]];
                }
            }
        }
        cout << countWays[sizeI][sizeJ] << endl;

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                cout << countWays[i][j] << " ";
            }
            cout << endl;
        }
    }
};
