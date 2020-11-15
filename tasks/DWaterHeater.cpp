#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const ll N = 2 * 1000000;
class DWaterHeater {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,w;
        cin >> n >> w;

        vector<__int128> s(N + 7);

        for (ll i = 0; i < n; ++i) {
            ll x,y,z;
            cin >> x >> y >> z;
            s[x] += z;
            s[y] -= z;
        }


        __int128 t = 0;

        for(ll i = 1; i <= N; i++){
            t += s[i];
            if (t > w){
                cout << "No" << endl;
                return;
            }
        }

        cout << "Yes" << endl;
	}
};

