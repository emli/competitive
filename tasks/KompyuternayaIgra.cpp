#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX / 2;
const int N = (int) 1e5 + 7;


class KompyuternayaIgra {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> minSum(size_t(n + 1));
        vector<int> a(size_t(n + 1));

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        for (int i = 2; i <= n; ++i) {
            int x = abs(a[i] - a[i - 1]) + minSum[i - 1];
            int y = (i - 2 >= 1) ? 3 * abs(a[i] - a[i - 2]) + minSum[i - 2] : INF;
            minSum[i] = min(x, y);
        }
        cout << minSum[n] << endl;
    }
};
