#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) x.begin(),x.end()
class BVariousDistances {
public:
    void solve(std::istream& cin, std::ostream& cout) {
		ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll n;
        cin >> n;

        vector<ll> a(n);

        ll  x = 0;
        ll  y = 0;
        ll  z = INT_MIN;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            x += abs(a[i]);
            y += abs(a[i]) * abs(a[i]);
            z = max(z,abs(a[i]));
        }

        cout << x << endl;
        cout <<fixed << setprecision(10) << sqrt(y) << endl;
        cout << z << endl;


	}
};
