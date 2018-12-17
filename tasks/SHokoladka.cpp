#include <bits/stdc++.h>

using namespace std;

class SHokoladka {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        n = 10;
        vector<int> count(n + 1);
        count[1] = 2;
        count[2] = 3;
        count[3] = 6;

        for (int i = 4; i <= n; ++i) {
            count[i] = 3 * count[i - 2];
        }

        for (int i = 1; i <= n; ++i) {
            cout << count[i] << " ";
        }
    }
};
