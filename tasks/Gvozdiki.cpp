#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()

const int INF = INT_MAX / 2;

class Gvozdiki {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> minSum(n + 1), a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(all(a));

        for (int pos = n - 1; pos >= 0; --pos) {
            int &res = minSum[pos];
            int ans = INF;
            
            if (pos > 1) {
                ans = min(ans, minSum[pos + 1] + a[pos] - a[pos - 1]);
            }
            if (pos + 1 < n) {
                ans = min(ans, minSum[pos + 2] + a[pos + 1] - a[pos]);
            }
            res = ans;
        }

        cout << minSum[0] << endl;
    }
};
