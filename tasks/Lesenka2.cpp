#include <bits/stdc++.h>

using namespace std;

class Lesenka2 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<int> maxSum(n + 1);
        vector<int> from(n + 1, -1);
        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                maxSum[i] = a[i];
                from[i] = 0;
            } else if (maxSum[i - 1] > maxSum[i - 2]) {
                maxSum[i] = maxSum[i - 1] + a[i];
                from[i] = i - 1;
            } else {
                maxSum[i] = maxSum[i - 2] + a[i];
                from[i] = i - 2;
            }
        }
        cout << maxSum[n] << endl;

        vector<int> ans;
        while (from[n] != -1) {
            ans.push_back(n);
            n = from[n];
        }

        for (int i = ans.size() - 1; i >= 0; --i) {
            cout << ans[i] << " ";
        }
    }
};
