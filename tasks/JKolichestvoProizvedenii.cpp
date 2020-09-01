#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
class JKolichestvoProizvedenii {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<ll> a(n + 1);

        for (ll i = 1; i <= n; ++i) {
            cin >> a[i];
            if (a[i] < 0){
                a[i] = 1;
            }else {
                a[i] = 0;
            }
        }

        ll ans = 0;
        for (ll i = 1; i <= n; ++i) {
            a[i] += a[i - 1];
            ans += a[i];
        }


        ll zeros = 0;
        

        cout << ans << " " << n * (n - 1) /2 - ans << endl;


	}
};
