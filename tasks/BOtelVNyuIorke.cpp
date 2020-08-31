#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
struct point{
    ll x,y;
};
class BOtelVNyuIorke {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);

        ll n,m;

        cin >> n >> m;

        ll c,h;

        cin >> c;

        vector<point> users(c);

        for (ll i = 0; i < c; ++i) {
            cin >> users[i].x >> users[i].y;
        }

        cin >> h;

        vector<point> rests(h);

        for (ll i = 0; i < h; ++i) {
            cin >> rests[i].x >> rests[i].y;
        }

        ll maxDis = LONG_MAX;
        int ans;
        for (ll i = 0; i < h; ++i) {
            if (-rests[i].x + rests[i].y > maxDis){
                maxDis = -rests[i].x + rests[i].y;
                ans = i;
            }
            if (-rests[i].x - rests[i].y > maxDis){
                maxDis = -rests[i].x - rests[i].y;
                ans = i;
            }
            if (rests[i].x + rests[i].y > maxDis){
                maxDis = rests[i].x + rests[i].y;
                ans = i;
            }
            if (rests[i].x - rests[i].y > maxDis){
                maxDis = rests[i].x - rests[i].y;
                ans = i;
            }
        }

        cout << maxDis << endl;
        cout << ans + 1 << endl;
	}
};
