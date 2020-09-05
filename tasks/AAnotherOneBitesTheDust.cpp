#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class AAnotherOneBitesTheDust {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll a,b,c;

        cin >> a >> b >> c;

        ll ans = 2 * c;



        if (a >= 1){
            ll end = min(a,b);
            ans += 2 * end;
            a -= end;
            b -= end;
        }
        if (a){
            ans++;
        }
        if (b){
            ans++;
        }
        cout << ans << endl;
	}
};
