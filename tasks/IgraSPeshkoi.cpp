#include <bits/stdc++.h>

using namespace std;

const int N = 101;
int maxAns[N][N];

class IgraSPeshkoi {
public:
    vector<int> a;
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int len = 1; len <= n; ++len) {
            for (int left = 0; left + len - 1 < n; ++left) {
                int right = left + len - 1;
                for (int first = 1; first >= 0; --first) {
                    int &res = maxAns[left][right];
                    if (left == right) {
                        res = a[left];
                    }
                    if (left < right) {
                        if (first) {
                            res = max(maxAns[left + 1][right], maxAns[left][right - 1]);
                        } else {
                            res = min(maxAns[left + 1][right], maxAns[left][right - 1]);
                        }
                    }
                }
            }
        }
        cout << maxAns[0][n - 1] << endl;
    }
};
