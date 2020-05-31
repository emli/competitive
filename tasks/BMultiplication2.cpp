#include <bits/stdc++.h>
using namespace std;

typedef  long long ll;
class BMultiplication2 {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        ll limit = (ll)1e18;
        cin >> n;
        ll res = 1;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 0) {
                cout << 0 << endl;
                return;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] <= limit / res){
                res = res * a[i];
            }else {
                cout << -1 << endl;
                return;
            }
        }
        cout << res << endl;
	}
};
