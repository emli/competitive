#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX / 2;
const int N = (int) 20 + 7;

class acmp120 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int sizeI, sizeJ;
        cin >> sizeI >> sizeJ;
        vector<vector<int>> a(sizeI + 1, vector<int>(sizeJ + 1, 0));
        vector<vector<int>> minSum(sizeI + 1, vector<int>(sizeJ + 1, INF));

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                cin >> a[i][j];
            }
        }

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                if (i == 1 && j == 1) {
                    minSum[i][j] = a[i][j];
                } else {
                    minSum[i][j] = min(minSum[i - 1][j], minSum[i][j - 1]) + a[i][j];
                }
            }
        }
        cout << minSum[sizeI][sizeJ] << endl;
    }
};
