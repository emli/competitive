#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DNevozmozhnoeVichislenie {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n,m;
        cin >> n >> m;

        if (n > m){
            cout << 0 << endl;
            return;
        }

        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll ans = 1;
        for (ll i = 0; i < n - 1; ++i) {
            for (ll j = i + 1; j < n; ++j) {
                ans *= abs(a[i] - a[j]) ;
                ans %= m;
            }
        }

        cout << ans << endl;

	}
};
