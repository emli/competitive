#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BTrapezoidSum {
public:
    static ll  sum(ll n){
        return n * (n + 1) / 2;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n;
        cin >> n;

        ll res = 0;
        for (ll i = 0; i < n; ++i) {
            ll a,b;
            cin >> a >> b;
            res += sum(b) - sum(a - 1);
        }
        cout << res << endl;

	}
};
