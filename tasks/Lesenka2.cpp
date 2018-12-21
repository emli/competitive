#include <bits/stdc++.h>

using namespace std;

class Lesenka2 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        secondSolution(cin, cout);
        return;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<int> maxSum(n + 1);
        vector<int> to(n + 1, -1);
        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                maxSum[i] = a[i];
                to[i] = 0;
            } else if (maxSum[i - 1] > maxSum[i - 2]) {
                maxSum[i] = maxSum[i - 1] + a[i];
                to[i] = i - 1;
            } else {
                maxSum[i] = maxSum[i - 2] + a[i];
                to[i] = i - 2;
            }
        }
        cout << maxSum[n] << endl;

        vector<int> ans;
        while (to[n] != -1) {
            ans.push_back(n);
            n = to[n];
        }

        for (int i = ans.size() - 1; i >= 0; --i) {
            cout << ans[i] << " ";
        }
    }

    void secondSolution(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        vector<int> maxSum(n + 1);
        vector<int> to(n + 1, -1);
        for (int i = n; i >= 0; --i) {
            if (i == n) {
                maxSum[i] = a[i];
                to[i] = -1;
            } else if (i == n - 1) {
                maxSum[i] = maxSum[i + 1] + a[i];
                to[i] = i + 1;
            } else if (maxSum[i + 1] > maxSum[i + 2]) {
                maxSum[i] = maxSum[i + 1] + a[i];
                to[i] = i + 1;
            } else {
                maxSum[i] = maxSum[i + 2] + a[i];
                to[i] = i + 2;
            }
        }
        cout << maxSum[0] << endl;

        int pos = 0;
        while (to[pos] != -1) {
            pos = to[pos];
            cout << pos << " ";
        }
    }
};
