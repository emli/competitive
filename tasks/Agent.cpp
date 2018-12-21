#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()

class Agent {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> minSum(n + 1);
        vector<pair<int, int> > a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        sort(all(a));

        for (int pos = n; pos >= 0; --pos) {
            int &res = minSum[pos];
            if (pos == 0) {
                res = minSum[pos + 2] + a[pos + 1].second;
            } else if (pos >= n) {
                res = 0;
            } else if (pos == n - 1) {
                res = a[pos].second;
            } else {
                res = min(minSum[pos + 1] + a[pos].second, minSum[pos + 2] + a[pos + 1].second);
            }
        }
        cout << minSum[0] << endl;
    }
};



