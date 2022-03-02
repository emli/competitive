#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BMakhmudEkhabISoobshchenie {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,k,m;
        cin >> n >> k >> m;
        vector<string> words(n + 1);

        for (ll i = 1; i <= n; ++i) {
            cin >> words[i];
        }

        vector<ll> a(n + 1);
        for (ll i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        unordered_map<string,ll> costs;

        for (ll i = 1; i <= n; ++i) {
            costs[words[i]] = a[i];
        }

        vector<vector<ll>> g(k + 1);
        for (ll i = 1; i <= k; ++i) {
            ll numberOfGroup;
            cin >> numberOfGroup;
            ll minCost = INT_MAX;
            for (ll j = 1; j <= numberOfGroup; ++j) {
                ll x;
                cin >> x;
                g[i].push_back(x);
                minCost = min(minCost,costs[words[x]]);
            }

            for (ll j : g[i]) {
                costs[words[j]] = minCost;
            }
        }

        ll ans = 0;
        for (ll i = 1; i <= m; ++i) {
            string x;
            cin >> x;
            ans += costs[x];
        }

        cout << ans << endl;
	}
};
