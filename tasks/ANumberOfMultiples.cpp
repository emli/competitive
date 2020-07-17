#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class ANumberOfMultiples {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int l,r,d;
        cin >> l >> r >> d;

        int ans = 0;
        for (int i = l; i <= r; ++i) {
            if (i % d == 0){
                ans++;
            }

        }
        cout << ans << endl;
	}
};
