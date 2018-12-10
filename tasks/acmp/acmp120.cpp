#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX / 2;
const int N = (int) 20 + 7;

class acmp120 {
public:
    int sizeI{}, sizeJ{};

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cin >> sizeI >> sizeJ;
        vector<vector<int>> a(sizeI + 1ULL, vector<int>(sizeJ + 1, 0));
        vector<vector<int>> minSum(sizeI + 1ULL, vector<int>(sizeJ + 1, INF));

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                cin >> a[i][j];
            }
        }
        minSum[1][1] = a[1][1];

        for (int i = 1; i <= sizeI; ++i) {
            for (int j = 1; j <= sizeJ; ++j) {
                if (i == 1 && j == 1) continue;
                minSum[i][j] = min(minSum[i - 1][j], minSum[i][j - 1]) + a[i][j];
            }
        }
        cout << minSum[sizeI][sizeJ] << endl;
    }
};
