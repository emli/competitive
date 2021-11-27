#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CCheese {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        ll n,w;
        cin >> n >> w;

        vector<pair<ll,ll>> a;

        for (int i = 0; i < n; ++i) {
            int x,y;
            cin >> x >> y;
            a.emplace_back(x,y);
        }

        sort(a.rbegin(),a.rend());


        ll ans = 0;
        for (auto & i : a) {
            ll k = min(i.second,w);
            ans += k * i.first;
            w -= k;
        }

        cout << ans << endl;
	}
};
