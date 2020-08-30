#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BStepennayaPosledovatelnost {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;

        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        ll ans = a[0] - 1;

        for (ll i = 2; i < n; ++i) {
            ll minDiff = LONG_MAX;
            ll x;
            for (int j = 2; (ll)pow(j,i) < (ll)1e10 ; j++) {
                 x = pow(j,i);
                minDiff = min(minDiff,abs(a[i] - x));
            }
            cout << minDiff <<" " << x << endl;
            ans += minDiff;
        }

        cout << ans << endl;
	}
};
