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
        vector<pair<int, int> > a(n);
        vector<int> minSum(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        sort(all(a));

        for (int i = 1; i < n; ++i) {
            if (i == 1) {
                minSum[i] = minSum[i - 1] + max(min(a[i - 1].second, a[i].second), min(a[i + 1].second, a[i].second));
            } else if (i == n - 1) {
                minSum[i] = minSum[i - 1] + min(a[i - 1].second, a[i].second);
            } else {
                minSum[i] = minSum[i - 2] + max(min(a[i - 1].second, a[i].second), min(a[i + 1].second, a[i].second));
            }
        }


        cout << minSum[n - 1] << endl;
    }
};



