#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class GPrevoskhodnayaPara {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll x,y,m;

        cin >> x >> y >> m;

        int ans = 1;

        while (x + y < m){
            ll z = x + y;
            x = y;
            y = z;
            ans++;
        }

        if (x >= m || y >= m){
            cout << 0 << endl;
            return;
        }

        if (abs(x - m) < abs(y - m)){
            cout << -1 << endl;
        }else {



            cout << ans << endl;
        }
	}
};


