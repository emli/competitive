#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
const int dx[] = {1,-1,0,0};
const int dy[] = {0,0,1,-1};
class BDvaTorta {
public:
    static void solve(std::istream& cin, std::ostream& cout) {
        int n;
        cin >> n;
        vector<ll> a(2 * n + 1);
        vector<vector<ll>> box(n + 1);

        for (int i = 1; i <= 2 * n; ++i) {
            cin >> a[i];
            box[a[i]].push_back(i);
        }

        ll p1 = 1;
        ll p2 = 1;

        ll ans = 0;

        for (int i = 1; i <= n; ++i) {
            ans += min({abs(p1 - box[i][0]) + abs(p2 - box[i][1]) , abs(p1 - box[i][1]) + abs(p2 - box[i][0])});
            p1 = box[i][0];
            p2 = box[i][1];
        }

        cout << ans << endl;
	}
};
