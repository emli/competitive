#include <bits/stdc++.h>
using namespace std;

class BTrickOrTreat {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int n,k;

        cin >> n >> k;

        vector<int> used(n + 1);
        for (int i = 0; i < k; ++i) {
            int d;
            cin >> d;

            for (int j = 0; j < d; ++j) {
                int x;
                cin >> x;
                used[x] = 1;
            }
        }

        int ans = 0;
        for (int l = 1; l <= n; ++l) {
            ans += !used[l];
        }

        cout << ans << endl;
	}
};
