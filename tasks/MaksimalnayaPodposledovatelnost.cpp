#include <bits/stdc++.h>

using namespace std;

class MaksimalnayaPodposledovatelnost {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> minLen(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int ans = 1;
        minLen[1] = 1;
        for (int i = 2; i <= n; ++i) {
            minLen[i] = 1;
            for (int j = 1; j < i; ++j) {
                if (a[i] > a[j] && minLen[j] + 1 > minLen[i]) {
                    minLen[i] = minLen[j] + 1;
                }
            }
            ans = max(ans, minLen[i]);
        }
        cout << ans << endl;
    }
};
