#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class BAnOddProblem {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1 && a[i] % 2 == 1){
                ans++;
            }
        }
        cout << ans << endl;

	}
};
