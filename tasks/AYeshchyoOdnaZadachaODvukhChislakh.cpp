#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class AYeshchyoOdnaZadachaODvukhChislakh {
public:
    void run(std::istream& cin, std::ostream& cout) {
        int a,b;
        cin >> a >> b;

        int d = abs(a - b);

        ll ans = 0;
        for (int i = 10; i >= 1; --i) {
            ans += d / i;
            d %= i;
        }
        cout << ans << endl;
    }
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--){
            run(cin,cout);
        }
	}
};
