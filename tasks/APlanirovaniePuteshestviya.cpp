#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class APlanirovaniePuteshestviya {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;

        cin >> n;

        vector<ll> b(n + 1),c(n + 1);
        for (ll i = 1; i <= n; ++i) {
            cin >> b[i];
            c[i] = i - b[i];
        }

        unordered_map<ll,ll> sum;

        ll ans = -1;
        for (ll i = 1; i <= n; ++i) {
            sum[c[i]] += b[i];
            ans = max(ans,sum[c[i]]);
        }

        cout << ans << endl;
	}
};
