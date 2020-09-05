#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class GVozvedenieVStepenPoModulyu {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n,m;

        cin >> n >> m;

        vector<ll> power;
        ll pow = 1;
        for (; pow <= m; pow *= 2) {
            power.push_back(pow);
        }

        power.push_back(pow);

        ll realN = min(n,(ll)power.size() - 1);


        cout << m % power[realN] << endl;

	}
};

