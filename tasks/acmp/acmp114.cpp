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
        //  assert(findMax()  < INT_MAX);
    }

    double solveWithDouble(int n, int k) {
        vector<double> count(size_t(n + 1), 0);
        count[1] = k - 1;
        count[2] = (k - 1) * k;
        for (int i = 3; i <= n; ++i) {
            count[i] = (k - 1) * (count[i - 1] + count[i - 2]);
        }

        return count[n];
    }

    double findMax() {
        double ans = -1;
        for (int n = 2; n <= 18; ++n) {
            for (int k = 2; k <= 10; ++k)
                if (n + k <= 18) {
                    ans = max(ans, solveWithDouble(n, k));
                }
        }
        return ans;
    }
};
