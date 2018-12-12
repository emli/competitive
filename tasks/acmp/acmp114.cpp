#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout << #x <<" = " << x << endl

class acmp114 {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n, k;
        cin >> n >> k;
        vector<int> count(size_t(n + 1), 0);

        count[1] = k - 1;

        for (int i = 2; i <= n; ++i) {
            count[i] += count[i - 1] * (k) - count[i - 2];
        }

        for (int i = 1; i <= n; ++i) {
            debug(count[i]);
        }
        cout << count[n] << endl;
    }
};

//1 -> {1} -> 1
//2 -> {10,11} - 2
//3 -> {101,110,111} - 3
//4 -> {1010,1011,1100,1101,1110,1111}
//count[i] = 1
//count[i] = 2
//count[i] = 3
//count[i] = 4