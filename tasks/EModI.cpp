#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
const ll mod = 1e9 + 7;
class EModI {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        ll n;

        cin >> n;

        vector<ll> a(n);

        vector<vector<ll>> dp(n + 2,vector<ll>(n + 2));

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }


        for (ll pos = n + 1; pos >= 0; --pos) {
            for (ll group = n + 1; group >= 1; group--) {

                ll &memo = dp[pos][group];

                if (pos >= a.size() || group >= n){
                    memo = 1;
                }
                else {
                    
                    ll total = 0L;
                    ll ans = 0;
                    for (ll i = pos; i < n; ++i) {
                        total += a[i];
                        total %= group;

                        if (total == 0) {
                            ans += dp[i + 1][group + 1] % mod;
                        }
                    }

                    memo = ans % mod;
                }
            }
        }


        cout << dp[0][1] << endl;

    }
};
