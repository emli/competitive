#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class CAXBC {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n;
        cin >> n;

        vector<int> d(n + 1);

        for (int i = 2; i <= n; ++i) {
            for (int j = i; j <= n; j += i) {
                d[j]++;
            }
        }

        int ans = 0;
        for (int i = 1; i < n ; ++i) {
            ans += d[i];
        }
        cout << ans + (n - 1) << endl;
	}
};
