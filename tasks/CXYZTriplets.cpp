#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sqr(x) x * x
class CXYZTriplets {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll limit = 10000;

        vector<ll> a(limit + 1);
        for(ll i = 1; i * i <= limit; i++)
            for (ll j = 1; j * j <= limit;++j)
                for (ll k = 1; k * k <= limit; ++k) {
                    ll t = sqr(i) + sqr(j) + sqr(k) + i * j + j * k + i * k;
                    if (t <= limit){
                        a[t]++;
                    }
                }
        ll n;
        cin >> n;

        for (ll l = 1; l <= n; ++l) {
            cout << a[l] << endl;
        }

	}
};
