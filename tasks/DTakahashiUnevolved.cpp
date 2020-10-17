#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class DTakahashiUnevolved {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll x,y,a,b;

        cin >> x >> y >> a >> b;

        ll cur = 0;
        ll ans = -1;
        while (x < y){
            ll z = (y - x - 1);
            ll d = z / b + cur;
            ans = max(ans,d);
            cur++;
            x *= a;
        }
        cout << ans << endl;
	}
};
