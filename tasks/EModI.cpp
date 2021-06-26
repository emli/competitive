#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
const ll mod = 1e9 + 7;
class EModI {
public:
    ll group = 1;
    ll go(ll pos, ll n, vector<ll> &a,vector<ll> &dp){
        ll &memo = dp[pos];

        if (pos >= a.size()){
            return memo = 1;
        }
        ll total = 0L;
        ll ans = 0;
        for (ll i = pos; i < n; ++i) {
            total += a[i];
            total %= group;

            if (total == 0){
                group++;
                ans += go(i + 1,n,a,dp);
                group--;
            }
        }

        return memo = ans;
    }
    void solve(std::istream& cin, std::ostream& cout) {
        ll n;

        cin >> n;

        vector<ll> a(n);

        vector<ll> dp(n + 20, -1);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << go(0L,n,a,dp) << endl;

    }
};
