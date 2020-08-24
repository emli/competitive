#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class EUravnivaniePodarkov {
public:

    void run(std::istream& cin, std::ostream& cout) {
        ll n;
        cin >> n;

        vector<ll> a(n),b(n);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; ++i) {
            cin >> b[i];
        }

        ll minA = *min_element(std::begin(a), std::end(a));
        ll minB = *min_element(std::begin(b), std::end(b));

        ll ans = 0;
        for (ll i = 0; i < n; ++i) {
            if (a[i] > minA && b[i] > minB){
                ll x = a[i] - minA;
                ll y = b[i] - minB;
                ans += min(x,y);
                a[i] -= min(x,y);
                b[i] -= min(x,y);
            }

            if (a[i] > minA){
                ans += a[i] - minA;
            }

            if (b[i] > minB){
                ans += b[i] - minB;
            }
        }

        cout << ans << endl;
    }



    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll t;

        cin >> t;

        while (t--)
            run(cin,cout);
	}
};
