#include <bits/stdc++.h>

using namespace std;


class Enti {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int k, mod;
        cin >> k >> mod;
        vector<int> count(k + 1);

        count[2] = 1;

        for (int i = 3; i <= k; ++i) {
            if (i % 2 == 1) {
                count[i] = count[i - 1];
            } else {
                count[i] = count[i - 1] + count[i / 2];
            }
            count[i] %= mod;
        }
        cout << count[k] % mod << endl;
    }
};
