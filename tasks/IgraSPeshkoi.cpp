#include <bits/stdc++.h>

using namespace std;

const int N = 101;
int dp[N][N][2];

class IgraSPeshkoi {
public:
    vector<int> a;

    int go(int l, int r, int first) {
        int &res = dp[l][r][first];
        if (res != -1) {
            return res;
        }
        if (l == r) {
            return res = a[l];
        }
        if (l < r) {
            if (first) {
                return res = max(go(l + 1, r, 1 - first), go(l, r - 1, 1 - first));
            } else {
                return res = min(go(l + 1, r, 1 - first), go(l, r - 1, 1 - first));
            }
        }
    }

    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        memset(dp, -1, sizeof dp);
        cout << go(0, n - 1, 1) << endl;
    }
};
