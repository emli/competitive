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
        vector<int> maxLen(n + 1);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int ans = 1;
        maxLen[1] = 1;
        for (int i = 2; i <= n; ++i) {
            maxLen[i] = 1;
            for (int j = 1; j < i; ++j) {
                if (a[i] > a[j] && maxLen[j] + 1 > maxLen[i]) {
                    maxLen[i] = maxLen[j] + 1;
                }
            }
            ans = max(ans, maxLen[i]);
        }
        cout << ans << endl;
    }
};
