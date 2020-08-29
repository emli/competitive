#include <bits/stdc++.h>
using namespace std;

typedef  long long ll;
#define all(x) x.begin(),x.end()
const ll linf = (ll)1e18 + 7;
const int N = (int)100 + 7;
ll a[N][N];
int tmr;
int was[N][N];
ll dp[N][N];
class FUmenshenieVisot {
public:
    ll calc(ll x, ll y, ll val,int n,int m,int tmr) {
        ll add = linf;
        if (a[x][y] >= val) add = a[x][y] - val;
        if (x == n && y == m) return dp[x][y] = add;
        if (was[x][y] == tmr) return dp[x][y];
        was[x][y] = tmr;
        ll res = linf;
        if (y < m) res = min(res, calc(x, y + 1, val,n,m,tmr));
        if (x < n) res = min(res, calc(x + 1, y, val,n,m,tmr));
        return dp[x][y] = res + add;
    }
    void run(std::istream& cin, std::ostream& cout) {
        ll n,m;
        cin >> n >> m;

        vector<ll> xs;
        for (ll i = 1; i <= n; ++i) {
            for (ll j = 1; j <= m; ++j) {
                cin >> a[i][j];
                a[i][j] -= (i + 1) + (j + 1);
                xs.push_back(a[i][j]);
            }
        }

        sort(all(xs));
        xs.erase(unique(all(xs)), xs.end());

        ll ans = linf;
        for (ll x : xs) {
            tmr++;
    
            ans = min(ans,calc(1,1,x,n,m,tmr));
        }
        cout << ans << endl;

    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
