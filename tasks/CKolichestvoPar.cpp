#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CKolichestvoPar {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,l,r;

        cin >> n >> l >> r;

        vector<ll> a(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(all(a));

        ll ans = 0;

        for (ll i = 0; i < n; ++i) {
            if (a[i] >= r) break;

            auto rit = upper_bound(a.begin() + i + 1, a.end(), r - a[i]);
            auto lit = lower_bound(a.begin() + i + 1, a.end(), l - a[i]);

            ans += distance(lit,rit);
        }

        cout << ans << endl;


	}
};
