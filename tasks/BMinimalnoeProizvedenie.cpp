#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BMinimalnoeProizvedenie {
public:
    void run(std::istream& cin, std::ostream& cout) {
        ll a,b,x,y,n;
        cin >> a >> b >> x >> y >> n;
        if (x > y){
            swap(a,b);
            swap(x,y);
        }

        swap(a,b);
        swap(x,y);
        ll q1 = ttt(cout, a, b, x, y, n);
        swap(a,b);
        swap(x,y);
        ll q2 = ttt(cout, a, b, x, y, n);

        cout << min(q1,q2) << endl;

    }

    ll ttt(ostream &cout, ll a, ll b, ll x, ll y, ll n) const {
        ll d = a - x;
        ll minus = min(d,n);
        a -= minus;
        n -= minus;

        d = b - y;
        minus = min(d,n);
        b -= minus;

        return a * b;
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
