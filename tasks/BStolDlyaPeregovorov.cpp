#include <bits/stdc++.h>
using namespace std;

class BStolDlyaPeregovorov {
public:
	void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n,m;
        cin >> n >> m;
        vector<vector<int> > sum(n + 1, vector<int>(m + 1));

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j) {
                char x;
                cin >> x;
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + (x == '1') - sum[i - 1][j - 1];
            }
        int best = -INT_MAX / 2;
        for (int x1 = 1; x1 <= n; ++x1) {
            for (int y1 = 1; y1 <= m; ++y1) {
                for (int x2 = x1; x2 <= n; ++x2) {
                    for (int y2 = y1; y2 <= m; ++y2) {
                        if (sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1] == 0){
                            best = max(best,2 * (x2 - x1 + 1) + 2 * (y2 - y1 + 1));
                        }
                    }
                }
            }
        }
        
        cout << best << endl;
    }
};
