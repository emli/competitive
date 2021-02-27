#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class ERyukzakNaOtrezke {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,s;
        cin >> n >> s;

        vector<int> w(n),c(n);

        for (int i = 0; i < n; ++i) {
            cin >> w[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        ll cur = 0;
        ll cost = 0;
        ll left = 0;
        ll ans = LLONG_MIN;
        for (int right = 0; right < n; ++right) {
            cur += w[right];
            cost += c[right];
            while (cur > s){
                cur -= w[left];
                cost -= c[left];
                left++;
            }
            ans = max(ans,cost);

        }

        cout << ans << endl;
	}
};
