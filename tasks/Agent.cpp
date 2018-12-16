#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()
const bool debug = false;

class Agent {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<pair<int, int> > a(n);
        vector<int> minSum(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        sort(all(a));

        for (int i = 1; i < n; ++i) {
            if (i == 1) {
                minSum[i] = minSum[i - 1] + min(max(a[i - 1].second, a[i].second), max(a[i + 1].second, a[i].second));
            } else if (i == n - 1) {
                minSum[i] = minSum[i - 1] + min(a[i - 1].second, a[i].second);
            } else {
                minSum[i] = minSum[i - 2] + min(max(a[i - 1].second, a[i].second), max(a[i + 1].second, a[i].second));
            }
        }

        if (debug) {
            for (int i = 0; i < n; ++i) {
                cout << i << " ";
            }
            cout << endl;

            for (int i = 0; i < n; ++i) {
                cout << minSum[i] << " ";
            }
        }
        cout << minSum[n - 1] << endl;
    }
};



