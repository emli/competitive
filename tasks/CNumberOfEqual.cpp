#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const ll dx[] = {1,-1,0,0};
const ll dy[] = {0,0,1,-1};

class CNumberOfEqual {
public:
    void solve(std::istream& cin, std::ostream& cout) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,m;

        cin >> n >> m;

        vector<ll> a(n),b(m);

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (ll i = 0; i < m; ++i) {
            cin >> b[i];
        }

        ll first = 0;
        ll second = 0;
        ll ans = 0;
        while (first < n && second < m){
            while (first < a.size() && a[first] < b[second]){
                first++;
            }

            while (second < b.size() && b[second] < a[first]){
                second++;
            }

            ll t1 = 0;
            while (first < a.size() && a[first] == b[second]){
                first++;
                t1++;
            }

            ll t2 = 0;
            while (second < b.size() && a[first - 1] == b[second]){
                second++;
                t2++;
            }

            ans += (t1 * t2);
        }

        cout << ans << endl;

	}
};
