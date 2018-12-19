#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(),(x).end()

class CepochkaSlov {
public:
    void solve(std::istream &cin, std::ostream &cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(all(a));

        vector<int> maxLen(n);
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            maxLen[i] = 1;
            for (int j = 0; j < i; ++j) {
                if (a[i].substr(0, a[j].size()) == a[j] && a[j].size() < a[i].size()) {
                    maxLen[i] = max(maxLen[j] + 1, maxLen[i]);
                }
            }
            ans = max(ans, maxLen[i]);
        }
        cout << ans << endl;
    }
};
