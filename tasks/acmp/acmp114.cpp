#include <bits/stdc++.h>

using namespace std;


class acmp114 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n, k;
        cin >> n >> k;
        vector<int> count(size_t(n + 1), 0);

        count[1] = k - 1;
        count[2] = (k - 1) * k;
        for (int i = 3; i <= n; ++i) {
            count[i] = (k - 1) * (count[i - 1] + count[i - 2]);
        }

        cout << count[n] << endl;
    }
};
