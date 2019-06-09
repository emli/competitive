#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class BBalance {
public:

    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n;
        cin >> n;
        vector<int> a(n + 1),prefix(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        int ans = int(1e9);

        for (int i = 1; i <= n; ++i) {
            ans = min(ans,abs(prefix[i] - (prefix[n] - prefix[i])));
        }
        cout << ans << endl;
	}
};
