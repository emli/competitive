#include <bits/stdc++.h>
using namespace std;

typedef unsigned  long long ll;
static const int N = 100000;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class CMandarinOrange {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll ans = 0;
        for (ll i = 0; i <= a.size(); ++i) {

            ll cur = 0;
            ll best = 0;
            for (int j = 0; j <= n; ++j) {
                if (j < n && a[j] >= a[i]){
                    cur++;
                }else {
                    best = max(best,cur * a[i]);
                    cur = 0;
                }
            }

            ans = max(ans,best);
        }

        cout << ans << endl;

	}
};
